#include <iostream>
using namespace std;

/*
Write a method named “getAverageScore” that will read in a list of non-negative 
scores (integer) from the user until the user enters a negative number to end. It will 
throw away the largest and smallest number in the list and return the average of the 
rest of the list (total / the number of scores). If the user has entered less than 3 
numbers, it will return -1. 
 
For example, if the user enters 100, 10, 0, -1, it will return 10. 
If the list is 100, -1, it will return -1 (as it does not have at least 3 numbers) 
Or the list of 100, 10, -1 will also return -1 because it has only 2 numbers. 
 
If the list is 100, 80, 90, 0, -1, then the total is 85 as it does not count 100 (the 
maximum) and 0 (the minimum). 
Similarly, if the list is 80, 90, 100, 70, 60, -1, then the average is 80 as 100 and 60 do 
not count toward the total.

In addition, the function should return the largest and the smallest number in the list.
*/

int  getAverageScore(int & largest, int & smallest)
{
    // no array is needed. You don't need to keep track of all numbers in an array.
    //    You can keep track of running total and count
    int num = 0 ;
    largest = 0 ;
    smallest = INT_MAX ;
    int count = 0, total = 0 ;
    do
    {
         cout << "Please enter a non-negative number: " ;
         cin >> num ;
         if (num >= 0)
         {
              if (num > largest)
                 largest = num ;
              if (num < smallest)
                 smallest = num ;
              count++ ;
              total += num ;
         }
    } while (num >= 0) ;
    // cout << "DEBUG: largest: " << largest << "  smallest: " << smallest << endl ;
    
    int avg = -1 ;
    if (count >= 3)
    {
         total = total - largest - smallest ;
         avg = total / (count-2) ;
    }
    return avg ;
}

int main()
{
    int big=0, small=0 ;
    cout << getAverageScore(big, small) << endl ;
    cout << "Big: " << big << " Small: " << small << endl ;
    return 0 ;
}