#include<iostream>
using namespace std;
int main()
{
    cout << "Please enter your full name: ";
    string name;
    cin >> name;
    cout << endl;
    cout << "Please enter your current GPA: ";
    double gpa;
    cin >> gpa;
    cout << endl;
    cout << "Please enter the number of units that you have enrolled: ";
    int units;
    cin >> units;
    cout << endl;
    cout << "Do you prefer to take online classes (y/n)? ";
    char online;
    cin >> online;
    cout << endl;
    cout << "Please enter a brief description about you: ";
    string description;
    cin >> description;
    cout << endl;
    cout << "==== Student information and fee ========= \n";
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Number of units: $" << units << endl;
    cout << "Fee: " << units * 10 << endl;
    cout << "Online: " << online << endl;
    cout << "Description: " << description << endl;

    
}