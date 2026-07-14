#include <iostream>
using namespace std;

// Recursive Function
int factorial(int n) {

    // Base Case
    if (n == 0 || n == 1)
        return 1;

    // Recursive Case
    return n * factorial(n - 1);
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}