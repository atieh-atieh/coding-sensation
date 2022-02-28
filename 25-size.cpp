// This C++ Program that determines the size of each data type.
#include <iostream>
using namespace std;
int main() {
    int intType;

    float floatType;

    double doubleType;

    char charType;

    cout<<"Size of int: "<< sizeof(intType)<<" bytes.\n";
    cout<<"Size of float: "<< sizeof(floatType)<<" bytes.\n";
    cout<<"Size of double: "<< sizeof(doubleType)<<" bytes.\n";
    cout<<"Size of char: "<< sizeof(charType)<<" bytes.\n";
    
	return 0;
}

// OUTPUT EXAMPLE
// Size of int: 4bytes.
// Sizeof float: 4 bytes.
// Size of double: 8 bytes.
// Size of char: 1byte.