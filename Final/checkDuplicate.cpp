#include <iostream>
#include <iomanip>
using namespace std;

class Word
{
    private:
        string word;
        string definition;
    public:
        Word(string word, string definition)
        {
            this->word = word;
            this->definition = definition;
        }
        string toString()
        {
            string str = "";
            str += "WORD(" + word + ")";
            str += "DEFINITION(" + definition + ")";
            return str;
        }
        bool  isTheSameWord(Word w)
        {
            if (word == w.word )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        bool find(string searchWord)
        {
            // check if word or definition contain the searchWord
            if (word.find(searchWord) != string::npos || definition.find(searchWord) != string::npos)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        string getDefinition(){
            return definition;
        }
        string getWord(){
            return word;
        }
};

int* checkDuplicate(Word* words[], int size, Word searchWord)
{
    int countWord = 0;
    int countDef = 0;
    for (int i = 0; i < size; i++)
    {
        if (words[i]->getWord() == searchWord.getWord())
        {
            countWord++;
        }
        
        if (words[i]->getDefinition() == searchWord.getDefinition() && words[i]->getWord() == searchWord.getWord())
        {
            countDef++;
        }
        
    }
    int* count = new int[2];
    count[0] = countWord;
    count[1] = countDef;
    return count;
}
bool isWhiteSpace(string s){
    for(int index = 0; index < s.length(); index++){
        if(!isspace(s[index]))
            return false;
    }
    return true;
}
Word* createWord(string word, string definition)
{
    if (word.empty() || definition.empty() || isWhiteSpace(word) || isWhiteSpace(definition))
    {
        return nullptr;
    }
    else
    {
        Word* w = new Word(word, definition);
        return w;
    }
}
int main(){
    Word* words [10];
    words[0] = createWord("School", "An educational institution");
    words[1] = createWord("Computer", "An electronic device");
    words [2] = createWord("School","A place where students learn");
    Word w1 = Word("School", "An educational institution");
    int *count = checkDuplicate(words, 3, w1);
    
}