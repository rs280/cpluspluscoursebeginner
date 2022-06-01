#include<iostream>
using namespace std;

bool  isSimpleBinaryString(char letters[]){
    char *ptr = letters;
    bool flag = true;
    int size = 0;
     do{
         size++;
         ptr+=1;
     } while((*ptr)!='\0');
     
    char *ptr2 = letters;
    for (int i =0; i<size; i++){
        
        
        if (i==size-1){
            if((*(ptr2+i)=='b')||(*(ptr2+i)=='B')||(*(ptr2+i)=='0')||(*(ptr2+i)=='1')){
                if((*(ptr+i-1)=='0')||(*(ptr+i-1)=='0')){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            else {
                flag = false;
                break;
            }
        }
        
        
        else{
           if ((*(ptr2+i)=='0')||(*(ptr2+i)=='1')){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
        }
    }
   
return flag;
     

}


int main(){
     char s0[] =    {'B','\0'} ; ;
   bool set = isSimpleBinaryString(s0);
   cout << boolalpha << set;

}