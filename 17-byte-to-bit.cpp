// This C++ program converts an input byte value to a bit value, or vice-versa

#include <iostream>
using namespace std;
int main()
{
	string str;
	int value, result;
	cout << "Enter byte or bit: ";
	cin >> str;
	if ((str == "byte") || (str == "Byte")) {
		cout << "Enter the value you want to convert: ";
		cin >> value;
		result = value * 8;
		cout << "The value in bits of the entered byte value is " << result << "." << endl;
	}
	else if ((str == "bit") || (str == "Bit")) {
		cout << "Enter the value you want to convert: ";
		cin >> value;
		result = value / 8;
		cout << "The value in bytes of the entered bit value is " << result << "." << endl;
	}
	else {
		cout << "Error: Wrong input" << endl;
	}
	return 0;
}

// OUTPUT EXAMPLE
// Enter a byte or bit: byte
// Enter the value you want to convert: 8
// The value in bit of the entered byte value is 64.

