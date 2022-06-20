#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

/*Write a function named “hasDash” that accepts parameters of the same as 
command line arguments (argc and argv). It returns true if one of the arguments 
has a ‘-‘ character and false otherwise. If it has no argument, it will return false. 
Once the ‘-‘ character is found, please do not continue to loop.
*/


bool hasDash(int argc, char* argv[]){
    for(int i = 0; i < argc; i++){
        if(argv[i][0] == '-'){
            return true;
        }
    }
    return false;
}

int main(int argc, char** argv)
{
    bool hasDash = false;
    for (int i = 0; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            hasDash = true;
            break;
        }
    }
    if (hasDash)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
