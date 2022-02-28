// This C++ Program converts the temperature in Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main(){

    // Input the temperature value in Celsius
    cout << "Enter a temperature value: ";
    float celsius;
    cin >> celsius;

    // Convert to Fahrenheit
    float fahrenheit = (celsius * 1.8) + 32;
    cout<< endl << celsius << " degrees in Celsius is equal to "<< fahrenheit <<" degrees in Fahrenheit."<< endl;
    return 0;
    
}

// OUTPUT EXAMPLE
// Enter a temperature value: 37.7
// 37.7 degrees in Celsius is equal to 99.9 degrees in Fahrenheit.