#include <iostream>
#include <sstream>  
#include <iomanip>
using namespace std;

void tokenize(string s, string del = " ")
{
    int start = 0;
    int end = s.find(del);
    for(int i =1; end!= -1; i++) {
        
        if (i % 2 == 0){
            cout << "Units: " << s.substr(start, end - start) << endl;
            
        }
        else{
            cout << "Class: " << s.substr(start, end - start) << "         ";
            
        }
        
        start = end + del.size();
        end = s.find(del, start);
    }
   
}
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
void enroll(int &numofClasses, int &numofUnits, string &detail){
    cin.clear();
    cin.ignore();
    cout << "Please enter the class name: ";
    string className;
    getline(cin, className);
    
    numofClasses = numofClasses + 1;
     cin.clear();
    cin.ignore(INT_MAX,'\n');
    cout << "Please enter the number of units for this class: ";
    int units;
     
    cin >> units;
    numofUnits= numofUnits + units;
    cin.clear();
    cin.ignore(INT_MAX,'\n');
    detail = detail + className + "," + to_string(units) + ",";
    

}
void summarize(string &name, int &ID, int &numofClasses, int &numofCredits){
   double fee= numofCredits*31.00;
    cout << "======================================"<< endl ;
    cout << "Name: " << name << endl
         << "ID: " << ID << endl
         << "Total classes: " << numofClasses << "\n" 
         << "Total credits: " << numofCredits << "\n"
       < "Total fee: $" << fee  << "\n"
         << "======================================"<< endl ;
}


void detail(string &name, int &ID, int &numofClasses, int &numofCredits, string &detailss){
      double fee= numofCredits*31;
     cout << "======================================"<< endl ;
    cout << "Name: " << name << endl 
         << "ID: " << ID << endl; 
        tokenize(detailss, ",");
        cout << "Total classes: " << numofClasses << "\n" 
         << "Total credits: " << numofCredits << "\n"
         << "Total fee: $"  << fee << "\n"
         << "======================================"<< endl ;

}




int main(){
    int numofClasses = 0 ;
    int className;
    int totalUnits=0;
   
 
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
             case 1: enroll(numofClasses, totalUnits, details);  break ;
             case 2:  summarize( name, ID,  numofClasses, totalUnits); break ;
             case 3: detail( name, ID,  numofClasses, totalUnits,  details); break;
             case 4: break ;
             default: errorOption() ;
    }
    } while (option != 4) ;
    
    return 0;
}