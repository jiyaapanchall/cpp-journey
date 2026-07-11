#include <iostream>
using namespace std;

class Calculator {
public:

    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two floating-point numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {

    Calculator calc;

    cout << "Addition of 2 integers: "
         << calc.add(10, 20) << endl;

    cout << "Addition of 3 integers: "
         << calc.add(10, 20, 30) << endl;

    cout << "Addition of 2 decimal numbers: "
         << calc.add(10.5, 20.7) << endl;

    return 0;
}