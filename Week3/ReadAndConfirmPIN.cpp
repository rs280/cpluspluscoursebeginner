#include <iostream>
using namespace std;
bool matchinput(int input, int correct){
    if (input==correct){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int TESTPIN;
    int PIN;
    int count=0;

    cout<<"Please enter your PIN: ";
    cin>>PIN;
    while(count<=3){
        cout<<"Please enter the PIN again to confirm: "<<endl;
            cin>>TESTPIN;
      if (matchinput(TESTPIN,PIN)){
          count++;
      }
      else if (matchinput(TESTPIN,PIN)==false){
          cout<<"Mismatched. Please try again."<<endl;
          count++;
      }
      
    }

    return 0;
}