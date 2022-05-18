#include <iostream>
using namespace std;

pair<bool, string > isAscendingorDescendingList(int a[], int n){
    string s ="";
    bool flag = true;
  if (n==1){
    flag =false;
  }
  else { 
	int z=a[1]-a[0]; 
	if(z>0)	 
	{ 
 
		for(int i=1;i<=n;i++)	 
		{ 
			if(a[i]>a[i+1])	 
			{ 
				flag=false;
                s=""; 
				break; 
                 
			} 
            s = "Ascending";
		} 
        
	} 
	else if (z<0)
	{ 
		for(int i=1;i<=n;i++) 
		{ 
			if(a[i]<a[i+1]) 
			{ 
				flag=false; 
                s="";
				break; 
                
			} 
            s = "Descending";
		} 
       
	} 
    else
    { 
        flag=false; 
        s="";
    } }
    
	return make_pair(flag, s); 


}

int main(){
    int numList2[] = { 10} ;
    int len2 = (sizeof(numList2)/sizeof(numList2[0]))-1;
    pair<bool, string > result2 = isAscendingorDescendingList(numList2, len2);
   
    return 0;
}