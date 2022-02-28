// This C++ Program checks if a number is positive, negative or zero

#include <iostream>

using namespace std;

int main()
{
    float number;
    cout<<"Enter a number: ";
    cin>>number;
    if (number > 0){
        cout<<"You entered a positive number.";
    }
   else if (number == 0){
        cout<<"You entered zero.";
   }
   else{
       cout<<"You entered a negative number.";
    }
    return 0;
}


// OUTPUT EXAMPLE
// Enter a number: -3
// You entered a negative number.