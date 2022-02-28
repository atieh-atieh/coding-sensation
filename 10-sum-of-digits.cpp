// This C++ Program calculates the sum of digits
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int n, m;  

    // Enter a number  
    cout<<"Enter a number: ";    
    cin>>n; 

    // Separate the digits   
    while(n > 0){    
	    m = n % 10;    
	    sum = sum + m;    
	    n = n / 10;    
    }   

   cout<<"The sum of digits is: "<<sum;    


    return 0;
}

// OUTPUT EXAMPLE
// Enter a number: 1234
// The sum of digits is 10.