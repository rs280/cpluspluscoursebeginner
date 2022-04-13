/*

    C++
    How to use C++ constructs
    
    - Case sensitive
    - have only one main function
    - declare before use

*/

#include<iostream> // include the header file
using namespace std; // use the standard namespace

int main(){
   
    cout << "This is a greeting" << endl; // print the string

    return 0; // return 0 to the operating system

  // variable (reserve storage/memory) to save values onto
  // data-type to tell how the big storage is going to be adn what kind of data it is

  //C++ primitive built-in data types
  bool isSuccessful = true; // boolean
  int quantity = 10; // integer
    double price = 10.99; // double
    char answer = 'y'; // char

    //variable means that you can save new values onto it
    isSuccessful = false;
    quantity = 20;
    price = 20.99;
    answer = 'n';

    //When you change the value, the old value is gone forever
    // one variable can hold only one value at a time
    // if you want to keep track of multiple values, you need to use many variables
    int oldQuantity = quantity;
    quantity = 30;

    // the data type dictates the vaild values for the variable
    // quantity = "hello"; // error
    quantity = -1;
    // answer = 1.1; // error

    // declare a variable
    int num;

    //declare and intialize a variable
    int count = 10;

    //declare multiple variables of same type
    char gradeA, gradeB, gradeC;

    //you need storage/memory for each variable
    cout << "How many do you want to buy?" << endl;
    cin >> quantity ; // whatever you provide, it will convert to the data type of the variable and save it

    cout << "How much does each cost?" << endl;
    cin >> price;

    //calculate the total cost
    double total = quantity * price;
    cout << "The total cost is $" << total << endl;

    return 0;
}

