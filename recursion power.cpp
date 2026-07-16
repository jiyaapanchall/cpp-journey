#include <iostream>
using namespace std;

// Recursive Function
int power(int x, int n) {

    // Base Case
    if (n == 0)
        return 1;

    // Recursive Case
    return x * power(x, n - 1);
}

int main() {

    int x, n;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    cout << "Result = " << power(x, n);

    return 0;
}