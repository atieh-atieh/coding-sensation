// This C++ program reverses the entered number

#include <iostream>

using namespace std;

int main()
{
    int number, reverse, remain;
    cout<<"Enter a number: ";    
    cin>>number; 
    while(number > 0){    
        remain = number % 10;
        reverse = (reverse * 10) + remain;
        number = number/10;
    }   

   cout<<"The reverse of the entered number is: "<<reverse;    


    return 0;
}

// OUTPUT EXAMPLE
// Enter a number : 12345
// Reverse of entered number is 