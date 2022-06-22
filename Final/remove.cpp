#include <iostream>
#include <iomanip>
#include <vector>
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
/*Write a function named “removeThisWord” that accepts the vector of pointers to 
Word objects and a search word. It will go through that list and remove all Word 
objects with the same search word from the vector object. It will return how many 
Word objects have been removed. */
int removeThisWord(vector<Word*>& words, string searchWord)
{
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i]->find(searchWord))
        {
            delete words[i];
            words.erase(words.begin() + i);
            count++;
            i--;
        }
    }
    return count;
}
int main()
{
    Word * w1  = createWord("word", "definition");
    Word * w2  = createWord("word", "definition");
    Word * w3  = createWord("hello", "world");
    vector<Word*> words ;
    words.push_back(w1);
    words.push_back(w2);
    words.push_back(w3);    
    int count = removeThisWord(words, "word");
    
}