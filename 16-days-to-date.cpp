// This C++ program convert number of days into year : month : day
#include <iostream>
using namespace std;

int main()
{
    //input number of days
    int d;
    cout << "Enter number of days to convert : ";
    cin >> d;
    int y=0, m=0;
    //calculate number of years in integer format
        y = (d - d % 365) / 365;
    //get number of days after getting number of years
    d = d % 365;
    //calculate number of monthes in integer format
    m = (d - d % 30) / 30;
    //get number of days after getting number of month
    d = d % 30;
    cout << y << " : " << m << " : " << d << endl;
    return 0;
}


// OUTPUT EXAMPLE
//Enter number of days to convert : 984
//2 : 8 : 14