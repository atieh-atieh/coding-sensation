// This C++ Program displays the first n terms of the Fibonacci series

#include <iostream>
using namespace std;

int main() {
    int count, firstTerm = 0, secondTerm = 1, nextTerm, i;

    //Ask user to input the number of terms 
    cout<<"Enter the numbers of terms: ";
    cin>>count;

    cout<<"First "<<count<<" terms of Fibonacci series : \t";
    for (i = 0; i < count; i++) {

        if (i <= 1)
            nextTerm = i;

        else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

       cout<<nextTerm<<"\t";
    }

    return 0;
}

//  OUTPUT EXAMPLE
// Enter the numbers of terms: 5
// First %d terms of Fibonacci series: 0 1 1 2 3