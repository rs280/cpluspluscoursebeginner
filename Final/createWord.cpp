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
};
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
    Word* w1 = createWord("School", "An educational institution");
    Word* w2 = createWord("           ","     ");
    Word* w3 = createWord("","");
    
  
}