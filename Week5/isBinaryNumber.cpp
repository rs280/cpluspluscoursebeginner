#include <iostream>
#include <sstream>
using namespace std;

bool isBinaryNumber(char array[], int len){
    if (array[len] != '\0'){
        
    }
    if ((array[0]=='0' && array[1]=='b') ){
       if (array[2]!='0' && array[2]!='1'){
           return false;}
        for (int i = 2; i < len; i++){
            if (array[i] != '0' && array[i] != '1'){
                return false;
            }
        }
        return true;
    }
    else {for (int i = 0; i < len; i++){
            if (array[i] != '0' && array[i] != '1'){
                return false;
            }
        }
        return true;
        
    }
    
}
int main(){
    char a[]= "b0";
    int len = (sizeof(a)/sizeof(a[0]))-1;
    bool result = isBinaryNumber(a, len);
    
}
