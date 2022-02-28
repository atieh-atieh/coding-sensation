// This c++ program checks if character is contained in a given String

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (str.find(c) != string::npos)
        cout << "String contains input character." << endl;
    else
        cout << "String doesn't contain input character." << endl;
    return 0;
}

// OUTPUT EXAMPLE
// Enter a string: Character
// Enter a character: r
// String contains input character.
