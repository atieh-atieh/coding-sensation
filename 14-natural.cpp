// This C++ Program returns the sum of the first n natural numbers

#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	// Input a number
	cout << "Enter a number (positive integer): ";
	cin >> n;

	// Add the numbers all the way from1 to the given number
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}

	// Output the sum
	cout << "Sum of first " << n << "natural numbers is : " << sum << endl;

	return 0;
}

//  OUTPUT EXAMPLE
// Enter a number (positive integer): 21
// Sum of first 21 natural numbers is: 231.