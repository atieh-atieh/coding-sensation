// This C++ program finds the sum of the series (1)+(1+2)+(1+2+3)+(1+2+3+...+n)

#include <iostream>
using namespace std;

int main()

{
    int  n, sum, total=0;
    cout << "Enter the value for nth term: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            total += j;
            sum += j;
            cout << j;
            if (j < i)
            {
                cout << "+";
            }
        }
        cout << " = " << sum << endl;
    }
    cout << "\nThe sum of the above series is: " << total << endl;
    return 0;
}

// OUTPUT EXAMPLE
//Enter the value for nth term: 8
//1 = 1
//1+2 = 3
//1+2+3 = 6
//1+2+3+4 = 10
//1+2+3+4+5 = 15
//1+2+3+4+5+6 = 21
//1+2+3+4+5+6+7 = 28
//1+2+3+4+5+6+7+8 = 36
//The sum of the above series is: 120