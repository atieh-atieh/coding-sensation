// This C++ Program calculates the square root of a number.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int number;
    cout << "Enter a integer: ";

    // Takes the input from the user
    cin >> number;

    double square_root = sqrt(number);

    cout << "The square root of " << fixed << setprecision(3) 
    << number << " is " << square_root << ".\n";
    return 0;
}

// OUTPUT EXAMPLE
// Enter a number: 25
// The square root of 25.000 is 5.000.