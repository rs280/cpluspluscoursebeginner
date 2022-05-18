#include <iostream>
using namespace std;
/* I will be accepting the 2 arrays, size, and 2 ints to pass the total wages, and number of overtime*/
/* I have decided not to return the dollar sign with the total pay*/
void payOut( int hours[], double wages[], int size,  double &pay, int &overtime){

    for (int i = 0; i <= size; i++){
        if (hours[i] <= 40){
            pay += (hours[i] * wages[i]);
            
        }
        else {
            pay += ((hours[i] - 40) * (wages[i] * 1.5)) + (40 * wages[i]);
            overtime = overtime +(hours[i]-40);
           
        }
    }
}



int main(){
    int  hours1[] = {1, 41}  ; 
   double  wages1[]  = {10.0, 20.0} ; 
   int size = (sizeof(hours1)/sizeof(hours1[0]))-1;
    double pay = 0;
    int overtime = 0;
    payOut(hours1, wages1, size ,pay, overtime);
    cout << pay << " "<< overtime;
}