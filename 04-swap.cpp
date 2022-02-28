// This C++ Program swaps two numbers

#include <iostream>
using namespace std;

int main(){
    
    int x;
    int y;
    cout << "Enter a value for x: ";
    cin >> x;
    cout << endl;
    cout <<"Enter a value for y: ";
    cin >> y;
    cout << endl;

    // Swap the two numbers
    int temp = x;
    x = y;
    y = temp;

    // Display the numbers after swapping them
    cout << "x = " << x << endl << "y = " << y <<endl;
    return 0;
}

// OUTPUT EXAMPLE
// Enter a value for x: 23
// Enter a value for y: 7
// x = 7.
// y = 23.
