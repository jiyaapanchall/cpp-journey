#include <iostream>
using namespace std;

// Recursive Function
void reverseString(string str, int index) {

    // Base Case
    if (index < 0)
        return;

    cout << str[index];

    // Recursive Call
    reverseString(str, index - 1);
}

int main() {

    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed String: ";

    reverseString(str, str.length() - 1);

    return 0;
}