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


int main(){
    Word w1("School", "An educational institution");
    string w1Text = w1.toString() ;
    Word w2("School", "An educational institution");
    bool sameWords= w2.isTheSameWord(w1) ;
    bool check =  w2.find("institution") ;
    Word w3("Computer", "An electronic device");
    bool check1= w3.find("institution") ;

}        