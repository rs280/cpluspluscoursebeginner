#include <iostream>
using namespace std;
/*
    My approach is to find the max of the array and its index
    Then, I check if the max is at the beginning or end of the array
    I will accept a bool for the flag, and int for the max
*/
void hasTheMaxInTheBeginningOrEnd(int array[], int size, bool &flag, int &max){
    // find the max of the array
    int maxIndex = 0;
    for (int i = 0; i <= size; i++){
        if (array[i] > max){
            max = array[i];
            maxIndex = i;
        }
    }
    // check if the max is at the beginning or end of the array
    if (maxIndex == 0){
        flag = true;
    }
    else if (maxIndex == size){
        flag = true;
    }
    else {
        flag = false;
    }
}



int main(){
 int numList0[] = {40, 10, 30, 50,34,234234,23423423,43243243}   ;   
  int size = (sizeof(numList0)/sizeof(numList0[0]))-1;
    bool flag = false;
    int max = 0;
    hasTheMaxInTheBeginningOrEnd(numList0, size, flag, max);


    return 0;
}