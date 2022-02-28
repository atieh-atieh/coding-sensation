//This C++ Program converts kilometers to miles 

#include <iostream>
using namespace std;

int main(){

    // This Python Program converts kilometers to miles 
    // Input a value for kilometers
    cout << "Enter value in kilometers: ";
    float kilometers;
    cin >> kilometers;

    // Initialize the conversion factor
    float conversion_factor = 0.621371;

    // Convert kilometers to miles
    float miles = kilometers * conversion_factor;
    cout << endl << kilometers << " kilometers is equal to " << miles << " miles." << endl;
    return 0;
}

// OUTPUT EXAMPLE
// Enter value in kilometers: 23
// 23.00 kilometers is equal to 14.29 miles.
