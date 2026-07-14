#include <iostream>
using namespace std;

// Recursive Function
void printNumbers(int n) {

    // Base Case
    if (n == 0)
        return;

    // Recursive Call
    printNumbers(n - 1);

    cout << n << " ";
}

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    printNumbers(n);

    return 0;
}