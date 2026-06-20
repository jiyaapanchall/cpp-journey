#include <iostream>
using namespace std;

int main() {
    int num = 10;

    cout << "Initial Value: " << num << endl;

    // Increment Operator
    cout << "Pre-increment (++num): " << ++num << endl;
    cout << "Post-increment (num++): " << num++ << endl;
    cout << "Value after Post-increment: " << num << endl;

    // Decrement Operator
    cout << "Pre-decrement (--num): " << --num << endl;
    cout << "Post-decrement (num--): " << num-- << endl;
    cout << "Value after Post-decrement: " << num << endl;

    return 0;
}