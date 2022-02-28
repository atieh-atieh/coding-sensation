// This C++ Program checks if a number is odd or even

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if (number % 2 == 0){
        cout<<number<< " is an even number.";
    }
   else{
       cout<<number<< " is an odd number.";
   }
    return 0;
}

// OUTPUT EXAMPLE
// Enter a number: 7
// 7 is an odd number.