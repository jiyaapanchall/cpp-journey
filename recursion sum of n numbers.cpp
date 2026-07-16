#include <iostream>
using namespace std;

// Recursive Function
int sum(int n) {

    // Base Case
    if (n == 0)
        return 0;

    // Recursive Case
    return n + sum(n - 1);
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum = " << sum(n);

    return 0;
}