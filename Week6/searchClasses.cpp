#include <iostream>
using namespace std;


const int MAX_NUM_OF_CLASSES = 5 ;
const double FEE_PER_UNIT = 31.0  ;

void enroll(string test[], int test2[], int size){
    if (size==MAX_NUM_OF_CLASSES){
        cout << "Sorry, you cannot enroll in anymore classes." << endl;
    }
    cout << "Please enter the class name: ";
    if (size==0 ){
        getline(cin, test[0]);
    }
    else{
        getline(cin, test[size+1]);
    }
    cout << "Please enter the number of units for this class: ";
    if (size==0 ){
        cin >> test2[0];
    }
    else{
        cin >> test2[size+1];
    }

}
 void detail(string test[], int test2[], int size){
     cout << "======================================" << endl;
        for (int i =0; i<=size; i++){
            cout << "Class name: " << test[i] <<
             "                     Units: " << test2[i] << endl;
            
        }
        cout << "Total classes: " << size+1 << endl;
        int totalUnits = 0;
        for (int i =0; i<=size; i++){
            totalUnits += test2[i];
        }
        cout << "Total units: " << totalUnits << endl;
        cout << "Total fee: " << totalUnits*FEE_PER_UNIT << endl;
        cout << "======================================" << endl;

 }
void search(string test[], int test2[], int size){

}
void units(string test[], int test2[], int size){

}
void help(){
    cout << "List of available commands:\n" 
         << "enroll  - to enroll in a class\n"
<< "detail  - to list the enrollment in details\n"
<< "search  - to search for a word in the class list\n"
<< "units>= - to search for classes with units greater and equal\n"
<< "help    - to display list of valid commands\n"
<< "exit    - to exit the program" << endl;

}




int main(){
    string className[] = {};
    int classUnits[] = {};
    int size = 0;

string option;
    
    do{
        
        cout << "Please enter a command: ";
       
        getline(cin, option);
     
        if (option=="enroll"){
            size = (sizeof(className)/sizeof(className[0]))-1;
            enroll(className, classUnits, size);
        }
        else if (option=="detail"){
             size = (sizeof(className)/sizeof(className[0]))-1;
            detail(className, classUnits, size);
        }
        else if (option=="search"){
             size = (sizeof(className)/sizeof(className[0]))-1;
            search(className, classUnits, size);
        }
        else if (option=="units>="){
             size = (sizeof(className)/sizeof(className[0]))-1;
            units(className, classUnits, size);
        }
        else if (option=="help"){
             size = (sizeof(className)/sizeof(className[0]))-1;
            help();
        }
        else {
             size = (sizeof(className)/sizeof(className[0]))-1;
            cout <<"Invalid command. Please enter \"help\" for the list of valid commands."<< endl;
        }

    }while(option!="exit");
}