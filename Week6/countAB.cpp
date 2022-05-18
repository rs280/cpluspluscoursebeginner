#include <iostream>
using namespace std;


void countAB(char   e [] , int &size, int &count, bool &flag){
// check if array starts with AB
    
    if (e[0] == 'A' && e[1] == 'B'){
        
        flag = true;
        // check if array has anymore AB
     for (int i = 0; i <= size; i++){
         if (e[i] == 'A' && e[i+1] == 'B'){
             count++;
             
         }
     }
    
    }
    else {
        flag = false;
        // check if array has anymore AB
     for (int i = 0; i <= size; i++){
         if (e[i] == 'A' && e[i+1] == 'B'){
             count++;
             
         }
     }
    }
    

}


int main(){
    // decided to accept 2 ints (1 for array size, and another for passing answer), 1 bool (for flag), and 1 array of chars
    char a[] = "ABAB" ;
    int size = (sizeof(a)/sizeof(a[0]))-1; // finding size without using string functions
    int count = 0;
    bool flag = false;
    countAB(a, size, count, flag);
    
    
    
    return 0;
}