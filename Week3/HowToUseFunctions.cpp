#include <iostream>
using namespace std;
/*
     declare before you can use
 */

/*
     function: perform a task
        - break into smaller and smaller task

     function definition
        - name
        - return type
              void :  no return value
        - parameter
              ()  empty parenthesis: no parameter
        - body of the function

     function call
        - perform the task

     function declaration/prototype


     benefits:
        - whenever you perform the task, you make the function call
        - better documentation (assuming that you are using meaningful function names
 */
// list of all functions used in this program by declaring all of function prototypes here
void  printTriangle() ;   // function declaration only


void displayMenu()
{
    cout << "Menu: " << endl 
         << "1. Add " << endl 
         << "2. Delete " << endl
         << "3. Modify " << endl
         << "4. Exit " << endl
         << "Option: " ;
}

/*
     return type
        void   no return value
        int    return an integer value

        return statement:  a value that is in the same data type that you declare
 */
int menu()
{
    displayMenu() ;
    int option = 0;
    cin >> option ;
    return option ;
}

// constants are not variables (you cannot change the value once it is declared)
//   it is ok to declare globally
// By convention, constants are named with all UPPER CASE
//   INT_MAX is an example of a constant
const int MENU_EXIT = 4 ;

void add()
{
    cout << "You want to add " << endl ; 
}

void deleteOption()
{
    cout << "You want to delete " << endl ;
}

void modify()
{
    cout << "You want to modify " << endl ;
}

void errorOption()
{
    cout << "Unsupported menu option" << endl ;
}

/*
      parameter list:
         - list of local variable declarations
           but these variables are initialized by the values passed in the function call

      parameter passing types:
          - pass-by-value
          - pass-by-reference
 */
void processMenuOption(int option)
{
    // int temp = 1 ;  // declare local variable and initialize explicitly

    switch ( option ) 
    {
             case 1: add() ; break ;
             case 2: deleteOption() ; break ;
             case 3: modify() ; break;
             case 4: break ;
             default: errorOption() ;
    }
}

int main()
{
    processMenuOption( 1 ) ;  // function call
    processMenuOption( 10 )  ; 
    int num = 3 ;
    processMenuOption( num ) ; // passing 3 to use to initialize option in the function

    // MENU_EXIT = 4 ; // not allowed because MENU_EXIT is a "const'

    for(int count=0; count < 5 ; count++)
    {
       printTriangle() ;   // function call
    }
    printTriangle() ;

    int option = 0;
    do
    {
         option = menu() ;
         processMenuOption( option ) ;
    } while (option != MENU_EXIT) ;

    return 0 ;
}

void  printTriangle()
{
       cout << "  *  " << endl
            << " *** " << endl
            << "*****" << endl ;
}