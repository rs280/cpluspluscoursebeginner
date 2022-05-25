#include <iostream>
#include <iterator>
using namespace std;


const int MAX_NUM_OF_CLASSES = 5 ;
const double FEE_PER_UNIT = 31.0  ;

void enroll(string test [], int test2[], int &size){
  bool flag = false;
  do {
  
    if (size==MAX_NUM_OF_CLASSES){
        cout << "Sorry, you cannot enroll in anymore classes." << endl;
        flag = true;
    }
    
    cout << "Please enter the class name: ";
    
   getline(cin, test[size]);
    

    cout << "Please enter the number of units for this class: ";
    cin >> test2[size];
     size ++;
     flag= true;
        
  } while (flag != true);
 

}
 void detail(string test[], int test2[], int size){
     cout << "======================================" << endl;
        for (int i =0; i<size; i++){
            cout << "Class name: " << test[i] <<
             "                     Units: " << test2[i] << endl;
            
        }
        cout << "Total classes: " << size<< endl;
        int totalUnits = 0;
        for (int i =0; i<size; i++){
            totalUnits += test2[i];
        }
        cout << "Total units: " << totalUnits << endl;
        cout << "Total fee: $" << totalUnits*FEE_PER_UNIT << ".00" << endl;
        cout << "======================================" ;

 }
void search(string test[], int test2[], int size){
    cout << "Please enter the search word: ";
    string searchWord;
    getline(cin, searchWord);
    
    cout << "======================================" << endl;
    int nomatch = 0;

    for (int i =0; i<size; i++){
        if (test[i].find(searchWord)!=string::npos){
            
            cout << "Class name: " << test[i] <<
             "                     Units: " << test2[i] << endl;
            
             
        }
        else{
            nomatch++;
        }
    }
    if (nomatch == size){
        cout << "Search did not match any class." << endl;
    }
    cout << "======================================" ;

}
void units(string test[], int test2[], int size){
    cout << "Please enter the number of units: ";
    int searchUnits;
    cin >> searchUnits;
    
    cout << "======================================" << endl;
    int nomatch = 0;

    for (int i =0; i<size; i++){
        if (test2[i]>=searchUnits){
            
            cout << "Class name: " << test[i] <<
             "                     Units: " << test2[i] << endl;
            
             
        }
        else{
            nomatch++;
        }
    }
    if (nomatch == size){
        cout << "Search did not match any class." << endl;
    }
    cout << "======================================" << endl;


}
void help(){
    cout << "List of available commands:\n" 
         << "enroll  - to enroll in a class\n"
<< "detail  - to list the enrollment in details\n"
<< "search  - to search for a word in the class list\n"
<< "units>= - to search for classes with units greater and equal\n"
<< "help    - to display list of valid commands\n"
<< "exit    - to exit the program" ;

}




int main(){
    string  className[] = {};
    int  classUnits[] ={};
    int size = 0;
    int times = 0;
string option;
    
    do{
        
         if ( times>0){
            cin.clear();
             cin.ignore();
         }
        
        cout << "Please enter a command: ";
        getline(cin, option);
      
        if (option=="enroll"){
            
            
            enroll(className, classUnits, size);
             times++;
        }
        else if (option=="detail"){
            
              detail(className, classUnits, size);
               times++;
        }
        else if (option=="search"){
            
            search(className, classUnits, size);
             times++;
        }
        else if (option=="units>="){
            
             units(className, classUnits, size);
              times++;
        }
        else if (option=="help"){
            
            help();
             times++;
        }
        else {
            cout <<"Invalid command. Please enter \"help\" for the list of valid commands.";
             times++;
        }
    
    
    }while(option!="exit");
}