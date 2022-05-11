#include <iostream>
using namespace std;

pair <bool,int> isTheLastNumberTheMax(int test[]){
    int max = test[test.length()-1];
    int count = 0;
    for (int i = 0; i < test.length(); i++){
        if(test[i]==max){
            count++;
        }
    }
    if(count==0){
        return make_pair(false,0);
    }
    else{
        return make_pair(true,count);
    }
}
int main()
  {  int arr[] = {50, 10, 20, 30, 40, 50};
    pair <bool,int> result = isTheLastNumberTheMax(arr);
    if(result.first){
        cout<<"The last number is the max."<<endl; }
    return 0;
  }

    
