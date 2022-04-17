#include<iostream>
using namespace std;
int main()
{
    
    cout << "Please enter your full name: ";
    string name;
    getline (cin, name);
    
    cout << "Please enter your current GPA: ";
    double gpa;
    cin >> gpa;
    
    cout << "Please enter the number of units that you have enrolled: ";
    int units;
    cin >> units;
     
    cout << "Do you prefer to take online classes (y/n)? ";
    char online;
    cin >> online;
    
    cout << "Please enter a brief description about you: ";
    string description;
    cin.ignore();
    getline (cin, description);
    
    cout << "==== Student information and fee ========= " << endl;
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Units: " << units << endl;
    cout << "Fee: $" << units * 31 << endl;
    cout << "Online class preference: " << online << endl;
    cout << "Description: " << description << endl;
    cout << "==========================================" << endl;

    
}