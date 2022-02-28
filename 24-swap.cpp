// This C++ Program swaps two numbers without using a third variable.
#include <iostream>
using namespace std;
int main() {

	int a, b;
	cout << "Enter the two numbers you want to swap: ";
	cin>> a>> b;


	cout << "Before swaping the two numbers: a = "<<a<<" & b = "<< b<<endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "After swaping the two numbers: a = " << a << " & b = " << b<<endl;
	return 0;
}

// OUTPUT EXAMPLE
// Enter the two numbers you want to swap: 33 88
// Before swaping the two numbers: a = 33 & b = 88.
// after swapping the two numbers: a = 88 & b = 33.