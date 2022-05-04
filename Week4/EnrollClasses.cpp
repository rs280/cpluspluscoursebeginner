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
void enroll(){

}
void processMenuOption(int option)
{
    // int temp = 1 ;  // declare local variable and initialize explicitly
    switch ( option ) 
    {
             case 1: enroll(); break ;
             case 2: break ;
             case 3: break;
             case 4: break ;
             default: errorOption() ;
    }
}



int main(){
    string name = "";
    do{
        cout << "Please enter the student's name: ";
       if(cin.get() == '\n')
        {
                cout<<"Student name cannot be empty or has only blanks.";
            }
    } while ((cin.get() == '\n'));
    int ID;
    do{
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Please enter the student's ID: ";
        cin >> ID;
        if (cin.fail()==true){
        
            cout << "Invalid student id. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout << "ID: ";
            cin >> ID;
        }
        else if (ID<=0){
            cout << "Invalid student id. Please try again." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "ID: ";
            cin >> ID;
        }

    } while ((ID<=0)||(cin.fail()==true));
    int option = 0;
    do
    {
         option = menu() ;
         switch ( option ) 
    {
             case 1: enroll(); break ;
             case 2: summarize(string name, int ID, int numofClasses, int numofCredits, int numofFee); break ;
             case 3: detail(); break;
             case 4: break ;
             default: errorOption() ;
    }
    } while (option != 4) ;
    
    return 0;
}