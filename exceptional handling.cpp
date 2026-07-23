#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    try {

        if (num2 == 0) {
            throw "Division by zero is not allowed!";
        }

        cout << "Result = " << num1 / num2 << endl;
    }

    catch (const char *message) {
        cout << "Exception: " << message << endl;
    }

    cout << "Program Ended Successfully." << endl;

    return 0;
}