#include <iostream>
using namespace std;


void displayMenu(){
      cout << "Menu: " << endl 
         << "1. enroll " << endl 
         << "2. summarize " << endl
         << "3. detail " << endl
         << "4. exit " << endl
         << "Option: " ;
}
int menu()
{
    displayMenu() ;
    int option = 0;
    cin >> option ;
    return option ;
}
void errorOption()
{
    cout << "Unsupported menu option" << endl ;
}
void enroll(string detail){
    cout << "Please enter the class name: ";
    string className;
    cin >> className;
    cout << "Please enter the number of units for this class: ";
    int units;
    cin >> units;
    detail = className + " " + to_string(units);


}
void summarize(string name, int ID, int numofClasses, int numofCredits){
    cout << "======================================"<< endl ;
    cout << "Name: " << name << endl
         << "ID: " << ID << endl
         << "Total classes: " << numofClasses << "\n" 
         << "Total credits: " << numofCredits << "\n"
         << "Total fee: $" << numofCredits*31.00  << "\n"
         << "======================================"<< endl ;
}


void detail(string name, int ID, int numofClasses, int numofCredits, int numofFee, string detail){
     cout << "======================================"<< endl ;
    cout << "Name: " << name << endl
         << "ID: " << ID << endl
         << "Total classes: " << numofClasses << "\n" 
         << "Total credits: " << numofCredits << "\n"
         << "Total fee: " << numofFee  << "\n"
         << "======================================"<< endl ;

}




int main(){
    int numofClasses = 0 ;
    int className;
    int totalUnits=0;
    int numofCredits=0;
 
    string name = "";
    string details="";

    do{
        cout << "Please enter the student's name: ";
        getline(cin,name);
        if (name.empty()==true){
            cout << "Student name cannot be empty or has only blanks." << endl ;
        }
    } while(name.empty()==true);
    
    int ID;
    do{
        
        cout << "Please enter the student's ID: ";
        cin >> ID;
        if (cin.fail()==true){
        
            cout << "Invalid student id. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout << "ID: ";
            cin >> ID;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        else if (ID<=0){
            cout << "Invalid student id. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "ID: ";
            cin >> ID;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }

    } while ((ID<=0)||(cin.fail()==true));
    int option = 0;
    do
    {
         option = menu() ;
         switch ( option ) 
    {
             case 1: enroll(details); break ;
             case 2: summarize( name, ID,  numofClasses, numofCredits,  details); break ;
             case 3: detail(); break;
             case 4: break ;
             default: errorOption() ;
    }
    } while (option != 4) ;
    
    return 0;
}