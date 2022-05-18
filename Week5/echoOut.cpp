#include<iostream>
#include<string>
#include <string_view>
using namespace std;
bool isWhitespace(string s){
    for(int index = 0; index < s.length(); index++){
        if(!isspace(s[index]))
            return false;
    }
    return true;
}


void echoOut(string s){
    
    
       if (s=="1"){
            cout << "One" << endl;
            
            }
       else if(s=="2"){
            cout << "Two" << endl;}
         else if(s=="3"){
            cout << "Three" << endl;}
         else if(s==""){
            cout << "Empty" << endl;}
        else if(isWhitespace(s)){
            cout << "Blanks" << endl;}
        else if(s=="exit"){
            
            }
        else{
            cout << s << endl;} 
    }



int main(){
string s ="";
    
  do {
     getline(cin, s);
    echoOut(s);
  } while (s != "exit");
}