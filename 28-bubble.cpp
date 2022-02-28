// This C++ Program implements the Bubble Sort Algorithm.

#include <iostream>
using namespace std;

int main() {

    int array[100], n, c, d, swap;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i =0; i < n; i++) {
        cout << "Enter element #" << i+1<<":";
        cin >> array[i];
    }
    for (c = 0; c < n - 1; c++) {
        for (d = 0; d < n - c - 1; d++) {
            if (array[d] > array[d + 1]) /* For decreasing order use '<' instead of '>' */
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    cout << "Sorted list in ascending order:\n";

    for (c = 0; c < n; c++)
        cout << array[c] << "\t";

    return 0;
}
// OUTPUT EXAMPLE
// Enter number of elements: 5
// Enter element #1: 44
// Enter element #2: 22
// Enter element #3: 77
// Enter element #4: 55
// Enter element #5: 888
// Sorted list in ascending order:
// 22  44  55  77  888




