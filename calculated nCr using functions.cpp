#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int calculate_nCr(int n, int r) {
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nrFact = factorial(n - r);

    return nFact / (rFact * nrFact);
}

int main() {
    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "nCr = " << calculate_nCr(n, r);

    return 0;
}