#include <iostream>
using namespace std;

// Recursive Function
int fibonacci(int n) {

    // Base Cases
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int n;

    cout << "Enter the position: ";
    cin >> n;

    cout << "Fibonacci Number = " << fibonacci(n);

    return 0;
}