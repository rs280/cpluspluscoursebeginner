#include <iostream>
using namespace std;

int main(){
    cout << "Please enter the character for triangle: ";
    string triangle;
    cin >> triangle;
    cout << "Please enter the character for square: ";
    string square;
    cin >> square;
    cout << "Please enter the character for rectangle: ";
    string rectangle;
    cin >> rectangle;
    cout << "Please enter the character for diamond: ";
    string diamond;
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
                int e = 1;
                for(int a=1;a<=3;a++)
                    {
                     for(int b=4;b>=a;b--)
                    {
                        cout<<" ";  // Printing Space Here
                    }
                 for(int c=0;c<e;c++)
                 {
                    cout<<triangle;  // Printing the chosen character here
                }
                 cout<<endl;   // new line
                 e=e+2;
                    }
            }
            else if (i==2){
                cout << "Square: " << endl;
                cout<<" "+square+square+square<<endl;
                cout<<" "+square+" "+square<<endl;
                cout<<" "+square+square+square<<endl;
                
                

            }
            else if (i==3){
                cout << "Rectangle: " << endl;
                cout<<rectangle+rectangle+rectangle+rectangle+rectangle<<endl;
                cout<<rectangle+"   "+rectangle<<endl;
                cout<<rectangle+rectangle+rectangle+rectangle+rectangle<<endl;
            }
            else if (i==4){
                cout << "Diamond: " << endl;
                cout<<" "+diamond+" "<<endl;
                cout<<diamond+" "+diamond<<endl;
                cout<<" "+diamond+" "<<endl;
                

            }
        }
    }
    
}