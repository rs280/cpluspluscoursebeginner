#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;


pair<bool, int> isThereDuplicateOfTheFirst(vector<int> test){
    int first = test[0];
    int count = 1;
    for(int i = 1; i < test.size(); i++){
        if(test[i] == first){
            count++;
            
        }
    }
   if (count ==1){
       return make_pair(false,0);
       
   }
   else if(count>1){
       return make_pair(true,count);
   }
   else{
       return make_pair(false,0);
   }
}
pair <bool,int> readSecretPIN(int pin){
    int count =0;
    int wrongcount =0;
    int test;
    while(count<3){
        cout<<"Please enter your PIN: ";
        cin>>test;
        if(test==pin){
            count++;
            break;
        }
        else{
            cout<<"Mismatched. Please try again."<<endl;
            wrongcount++;
            count++;
        }
    }
    if(wrongcount<3){
        cout<<"Accepted"<<endl;
        cout<<count<<" attempts."<<endl;
        return make_pair(true,count);
    }
    else{
        cout<<"Mismatched. Too many unsuccessful tries."<<endl;
        cout<<"Not Accepted."<<endl;
        cout<<"3 attempts."<<endl;
        return make_pair(false,3);
    }

    
}

int main()
{  
    int PIN;
    pair<bool, int> result;
    pair<bool, int> result1;
    vector<int> list;
    stringstream ss;
    string str;
    cout << "Please enter list of numbers: ";
    getline(cin, str);
    replace( str.begin(), str.end(), ',', ' ');
    ss << str;

    int x = 0;
    while (ss >> x)
    {
        list.push_back(x);
        
    }
    result = isThereDuplicateOfTheFirst(list);
    cout<<"Please enter your PIN: ";
    cin>>PIN;
    result1 = readSecretPIN(PIN);
    

    
}