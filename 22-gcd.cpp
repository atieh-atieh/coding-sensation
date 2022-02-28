// This C++ Program finds the GCD of two numbers.
#include <iostream>
using namespace std;

int main(){
    int number1, number2, hcf;
    cout<<"Enter two integers :";
    cin>>number1>>number2;
    for( int i=1; i<=number1 || i<=number2; ++i){
        if(number1 % i == 0 && number2 % i == 0)
            hcf = i;
    }
    cout<<"the highest common factor of "<<number1<<" and "<<number2<<" is " <<hcf;
   return 0;
}


// OUTPUT EXAMPLE
// Enter two integers : 11 121
//the highest common factor of 11 and 121 is 11.