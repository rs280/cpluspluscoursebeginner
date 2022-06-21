#include <iostream>
using namespace std;
bool hasDash(int argc, char * argv[])
{
    bool result = false;
    if (argc >= 0)
    {
    for (int i = 0; i < argc; i++)
    {
        char * p = argv[i];
        for (int j =0; p[j] != '\0'; j++)
        {
            
            if (p[j] == '-')
            {
                result = true;
                break;
            }
        }
    }}
    else 
    {
        result = false;
    }
    return result;
}
int main(int argc, char * argv[])
{
    cout << hasDash(argc, argv) << endl;
    return 0 ;
}