#include <iostream>
using namespace std;
int main(){
    /* read in 3 different numbers with the following rules:
- the first number must be greater than 0
- the second number must be greater than the first number
- the third number must be between the first number and the third number and not equal.*/
    double num1, num2, num3;
   do{
       cout<<"Please enter the first number: ";
         cin>>num1;
         if (cin.fail()==true){
                cin.clear();
                cin.ignore(INT_MAX,'\n');
                cout<<"Invalid input. Please try again"<<endl;
         }
         else if(num1<=0){
             cout<<"The first number must be greater than 0. Please try again"<<endl;
         }

   }while ((num1<=0)||(cin.fail()==true));

    do{
    cout<<"Please enter the second number: ";
    cin>>num2;
    if (cin.fail()==true){
                cin.clear();
                cin.ignore(INT_MAX,'\n');
                cout<<"Invalid input. Please try again"<<endl;
        }
        else if(num2<=num1){
            cout<<"The second number must be greater than the first number. Please try again"<<endl;
        }

    }while((num2<=num1)||(cin.fail()==true));

    do{
    cout<<"Please enter the third number: ";
    cin>>num3;
    if (cin.fail()==true){
                cin.clear();
                cin.ignore(INT_MAX,'\n');
                cout<<"Invalid input. Please try again"<<endl;
        }
        else if(num3<=num1||num3>=num2){
            cout<<"The third number must be between the first number and the second number and not equal. Please try again"<<endl;
        }
    } while((num3<=num1||num3>=num2)||(cin.fail()==true));
    cout << "The three numbers you have entered: " << num1 <<", "<< num2<< ", "<< num3<< endl;
    return 0;
}