// This C++ Program that calculates the power of a number.

#include <iostream>
using namespace std;
int main() {
	int num, exponent, result = 1;
	cout << "Enter a number: ";
	cin >> num;

	cout << "Enter an exponent: ";
	cin >> exponent;

	for (int i = 1; i <= exponent; i++) {
		result = result * num;
	}
	cout << num << "^" << exponent << "=" << result;
	return 0;
}

// OUTPUT EXAMPLE
// Enter a num number: 4
// Enter an exponent: 2
// 4 ^ 2 = 16.




