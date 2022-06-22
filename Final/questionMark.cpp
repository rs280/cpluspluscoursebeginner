#include <iostream>
#include <iomanip>
using namespace std;
/*Write a function named “hasOnlyQuestionMark” that accepts parameters of the 
same as command line arguments (argc and argv). It returns how many arguments 
are “?” only.  */
int hasOnlyQuestionMark(int argc, char* argv[])
{
    int count = 0;
    for (int i = 0; i < argc; i++)
    {
        char *pOneArg = argv[i];
        for(int innerCount=0; pOneArg[innerCount] != '\0'; innerCount++){
            if (pOneArg[innerCount] == '?')
            {
                count++;
            }
        }
    }
    return count;
}
int main(int argc, char * argv[])
{
    
  int questionMark = hasOnlyQuestionMark(argc, argv) << endl;
    return 0 ;
    }