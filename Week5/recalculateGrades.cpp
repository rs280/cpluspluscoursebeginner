
#include <iostream>
using namespace std;

string recalculateGrades(char grades[], bool extra[], int size)
{
    int update=0;
    int pass=0;
    int fail=0;

    for (int i=0; i<=size; i++)
    {   
        if(extra[i]==true)
        {
            if(grades[i]=='A')
            {
                  
                pass=pass+1;
            }
            else if (grades[i]=='B'){
                 
                pass=pass+1;
                update++;
                
            }
            else if (grades[i]=='C'){
               
                update++;
                pass=pass+1;
                
            }
            else if (grades[i]=='D'){
           
                
               pass=pass+1;
                update++;
                
            }
            else if (grades[i]=='F'){
              
                fail=fail+1;
                update++;
               
                
            }
        }
        else if (extra[i]==false){
            if(grades[i]=='A')
            {
                pass++;
                
            }
            else if (grades[i]=='B'){
                
                pass++;
            }
            else if (grades[i]=='C'){
                 
                pass++;
                
            }
            else if (grades[i]=='D'){
               
                fail++;
            }
            else if (grades[i]=='F'){
               
                fail++;
            }
    
    
    }
    }
    
return " Update: " + to_string(update) + " Pass: " + to_string(pass) + " No Pass: " + to_string(fail);
    }

int main(){
    char  grades1[] =  {'A', 'B', 'B', 'C', 'D', 'F', 'C'}   ; 
   bool  extra1[]  = {true, false, true, false, false, true, false} ; 
    int   size1     = (sizeof(grades1)/sizeof(grades1[0]))-1;
    string    result1 = recalculateGrades(grades1, extra1, size1);
    

}