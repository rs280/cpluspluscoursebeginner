#include <iostream>
using namespace std;

int main()
{
    /*
        The order of instructions matters
        - the first thing you do is declare the variable
        - then you initialize the variable
        - then you use the variable
    */
   cout << "How old are you?" << endl;
    int age;
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    /*
    if (test expression)
    {
        // do something only if test condition is true
    }
    else
    {
        // do something else
    }
    */

   if (age >= 16)
    {
         cout << "You can drive" << endl;
    }
    if ((age>=16))&&(age<=18)
    {
        cout <<"You need a permit" << endl;
    }
    if (age>=18)
    {
        cout << "You can vote" << endl;
    }
    if (age>=21)
    {
        cout << "You can drink" << endl;
    }
    char grade;
    cout << "What is your grade?" << endl;
    cin >> grade;
    if ((grade=='A')||(grade=='B')||(grade=='C'))
    {
        cout << "You passed" << endl;
    }
    
    else if ((grade=='D')||(grade=='F'))
    {
        cout << "You failed" << endl;
    }
    else
    {
        cout << "Invalid grade" << endl;
    }
    return 0;
}