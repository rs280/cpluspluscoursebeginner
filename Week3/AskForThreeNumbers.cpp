#include <iostream>
using namespace std;
int main()
{
    double first = 0;
    double second = 0;
    double third = 0;
    do{
        cout << "Please enter the first number: ";
        cin >> first;
        if (cin.fail()==true){
            cout << "Invalid number. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX);}
        if (first<=0){
            cout << "The first number must be greater than 0. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n'); }
        
            
        
        
    } while ((first<=0)||(cin.fail()==true));
    
    do {
        cout << "Please enter the second number: ";
        cin >> second;
        if(cin.fail()==true){
            cout <<"Invalid number. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX , '\n'); }
        if(second<=first){
            cout << "The second number must be greater than the first number. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n'); }
    } while ((second<=first)||(cin.fail() == true));

    do {
        cout << "Please enter the third number: ";
        cin >> third;
        if ((first>=third)||(second<=third)){
            cout << "The third number must be greater than the first and second number. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n'); }
        else if (cin.fail()==true){
            cout << "Invalid number. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX); }
        
    } while ((first>=third)||(second<=third)||(cin.fail() == true));
    
    return 0;
}
