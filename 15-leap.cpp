// This C++ Program checks if the given year is a leap year or not.

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<< "Enter a year: ";
    cin>>year;

    if (year % 4 == 0) {

        if (year % 100 == 0) {
            if (year % 400 == 0)
               cout<<year <<" is a leap year."<<endl;
            else
                cout << year << " is not a leap year." << endl;
        }
        else
            cout << year << " is a leap year." << endl;
    }
    else
        cout << year << " is not a leap year." << endl;
	return 0;
}

// OUTPUT EXAMPLE
// Enter year: 1991
// 1991 is not a Leap Year

