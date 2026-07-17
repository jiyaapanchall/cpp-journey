#include <iostream>
using namespace std;

// Recursive Function
bool isPalindrome(string str, int start, int end) {

    // Base Case
    if (start >= end)
        return true;

    // If characters don't match
    if (str[start] != str[end])
        return false;

    // Recursive Call
    return isPalindrome(str, start + 1, end - 1);
}

int main() {

    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}