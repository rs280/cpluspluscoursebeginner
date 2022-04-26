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
    int wrongcount=0;
    cout<<"Please enter your PIN: ";
    cin>>PIN;
    while((count<3)){
        cout<<"Please enter the PIN again to confirm: ";
        cin>>TESTPIN;
      if (matchinput(TESTPIN,PIN)){
          count++;
          break;
      }
      else if (matchinput(TESTPIN,PIN)==false){
          cout<<"Mismatched. Please try again."<<endl;
          count++;
      }}

      
      if (count<=3){
          cout<<"Accepted"<<endl;
          cout<<count<<" attempts."<<endl;
      }
      else {
          cout<<"Mismatched. Too many unsuccessful tries."<<endl;

            cout<<"Not Accepted."<<endl;
           cout<<"3 attempts."<<endl;
      }
      
    

    return 0;
}