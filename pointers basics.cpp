#include <iostream>
using namespace std;

int main() {
    int num = 10;

    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer stores address: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;

    return 0;
}