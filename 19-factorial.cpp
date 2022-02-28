// This C++ Program finds the factorial of a given number.
#include<iostream>
using namespace std;

int main()    
{    
  int i,fact=1,number;
  cout<<"Enter a positive integer: ";  
  cin>>number;    
  for(i = 1; i <= number; i++){ 
    fact=fact*i;    
  }    
  cout<<"The factorial of "<<number<<" is: "<<fact;    
 
}   

// OUTPUT EXAMPLE
// Enter a positive integer :5
// The factorial of 5 is: 120.



