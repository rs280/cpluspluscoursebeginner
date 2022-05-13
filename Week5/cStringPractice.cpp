#include <iostream>
using namespace std;

pair <bool,int> isTheLastNumberTheMax(int arr[], int len){
    
    int max = arr[len];
    int count = 0;
    for (int i = 0; i < len; i++){
        if(arr[i]==max){
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
void changeCase( char array[], bool toUpper, int len){
    if (array[len] != '\0'){
        cout << "Error: array is not terminated" << endl;
    }
    else if (array[len] == '\0') {

    for (int i = 0; i < strlen(array); i++){
        if(toUpper){
            array[i] = toupper(array[i]);
        }
        else{
            array[i] = tolower(array[i]);
        }
    }
    }
}
int main()
  {  int arr[] = {50, 10, 20, 30, 50, 50, 50};
   int len = (sizeof(arr)/sizeof(arr[0]))-1;
    pair <bool,int> result = isTheLastNumberTheMax(arr, len);
    if(result.first == true){
        cout<< "There are "<<result.second << " numbers identical to the max."<<endl; }
    else if(result.first == false){
        cout<< "There are no numbers identical to the max."<<endl; }
    char test[] = {'H', 'e', 'l', 'l', 'o', '\0'} ;
    len = (sizeof(test)/sizeof(test[0]))-1;
    changeCase(test, true, len);
    cout << test << endl;
    char test1[] = {'H', 'e', 'l', 'l', 'o'} ;
    len = (sizeof(test1)/sizeof(test1[0]))-1;
    changeCase(test1, false, len);
    char test2[] = {'H', 'e', 'l', 'l', 'o', '\0'} ;
    len = (sizeof(test2)/sizeof(test2[0]))-1;
    changeCase(test2, false, len);
    cout << test2 << endl;
    return 0;
  }

    
