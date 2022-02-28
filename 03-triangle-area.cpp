// This C++ Program finds the area of a triangle

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    // Calculates the semi-perimeter
    float s = (a + b + c) / 2;

    // Calculates the area
    float area = sqrt((s * (s - a) * (s - b) * (s-c)));

    cout << "The area of the triangle is "<< area << endl;
    return 0;
}

// OUTPUT EXAMPLE
// Enter first side: 5
// Enter second side: 6
// Enter third side: 7
// The area of the triangle is 14.70.