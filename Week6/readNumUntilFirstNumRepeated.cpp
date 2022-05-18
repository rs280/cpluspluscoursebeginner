#include <iostream>
using namespace std;


void readNumUntilFirstNumRepeated( int &count, int &max){
 cout << "Please enter numbers until the first is repeated:" << endl;
    int test;
 cin >> max;

  do {
      cin >> test;
      count ++;
      
  } while (test!=max);
}



int main(){
    int count = 0;
    int max = 0;
    readNumUntilFirstNumRepeated(count, max);
    cout << "Count: " << count << endl;
    cout << "Value of the first number: " << max << endl;
    

    return 0;
}