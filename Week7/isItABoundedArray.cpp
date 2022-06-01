#include<iostream>
using namespace std;

void isItABoundedArray(int numbers[], int length, bool &test2){
   if (length <= 0)
    return;
    int *min = &numbers[0];
  int *max = &numbers[0];
  
  for (int i = 1; i < length; i++)
  {
    if (*min > numbers[i])
    {
      min = &numbers[i];
    }
    if (*max < numbers[i])
    {
      max = &numbers[i];
    }
  }
  if (((*min == numbers[0])&&(*max==numbers[length-1]))||((*max == numbers[0])&&(*min==numbers[length-1]))){
      test2 = true;
  }
  else{
      test2=false;
  }
}

int main(){
    int arr[] = {10, 40, 20, 30} ;
    int size = sizeof(arr)/sizeof(arr[0]);
   
    bool count = false;
    isItABoundedArray(arr, size, count);
    cout << boolalpha<< count<<endl;
    
    return 0;
}