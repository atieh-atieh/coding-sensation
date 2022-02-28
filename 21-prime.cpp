// This C++ Program checks if a given number is prime or not.
#include<iostream>
using namespace std;

int main() {
  int n, flag = 0;
  cout<<"Enter a positive integer : ";
  cin>>n;
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (n == 1) {
    cout<<"1 is neither prime nor composite.";
  } 
  else {

    if (flag == 0)
      cout<<n<<" is a prime number.";

    else
      cout<<n<<" is not a prime number.";
  }


}

// OUTPUT EXAMPLE
// Enter a positive integer :5
// 5 is a prime number.



