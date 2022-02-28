// This C++ Program checks if a given number is palindrome.

#include <iostream>
using namespace std;

int main() {
	int n, reversed = 0, remainder, original;
	cout << "Enter a number: ";
	cin >> n;
	original = n;


	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	if (original == reversed)
		cout << original << " is a palindrome.";


	else
		cout << original << " is not a palindrome.";


}
// OUTPUT EXAMPLE
// Enter a number: 121     
// 121 is a palindrome