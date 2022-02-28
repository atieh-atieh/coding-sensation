// This C++ Program finds the LCM of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int number1, number2, max;
    cout<<"Enter two positive integers :";
    cin>>number1>>number2;
    if(number1>number2)
        max=number1;
    else
        max=number2;
    while(1){
        if(max%number1==0 && max%number2==0){
           cout<<"the least common denominator of "<<number1<<" and "<<number2<<" is "<<max;
           break;      
       }
       ++max;
   }
  
}


// OUTPUT EXAMPLE
// Enter two positive integers :22 33
//the least common denominator of 22 and 33 is 66.



