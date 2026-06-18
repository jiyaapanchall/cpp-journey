#include <iostream>
using namespace std;

int main() {

    // Implicit Type Conversion
    int num = 10;
    double result = num;

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value: " << num << endl;
    cout << "Converted to double: " << result << endl;

    cout << endl;

    // Explicit Type Conversion
    double pi = 3.14159;
    int integerPi = (int)pi;

    cout << "Explicit Type Conversion:" << endl;
    cout << "Double value: " << pi << endl;
    cout << "Converted to int: " << integerPi << endl;

    return 0;
}

