#include <iostream>
using namespace std;

int main(){
    cout << "Please enter the character for triangle: ";
    char triangle;
    cin >> triangle;
    cout << "Please enter the character for square: ";
    char square;
    cin >> square;
    cout << "Please enter the character for rectangle: ";
    char rectangle;
    cin >> rectangle;
    cout << "Please enter the character for diamond: ";
    char diamond;
    cin >> diamond;
    cout << "How many shapes do you want to print? ";
    int num;
    cin >> num;
    if (num==0){
        cout << "No shape is printed" << endl;
    }
    else if (num<1 || num>4){
        cout << "Invalid number of shapes. The number must be between 1 and 4." << endl;
    }
    else if (1<=num && num<=4){
        
        for (int i=1; i<=num; i++){
            if (i==1){
                cout << "Triangle: " << endl;
                cout <<"     "<< triangle << endl;
                cout <<"    "<< triangle+triangle+triangle << endl;
                cout <<"   "<< triangle+triangle+triangle+triangle+triangle << endl;    
            }
            else if (i==2){
                cout << "Square" << endl;
            }
            else if (i==3){
                cout << "Rectangle" << endl;
            }
            else if (i==4){
                cout << "Diamond" << endl;
            }
        }
    }
    
}