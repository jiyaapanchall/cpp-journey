#include <iostream>
using namespace std;

void displayAddress(int num) {
    cout << "Address inside function: " << &num << endl;
}

int main() {
    int num = 10;

    cout << "Address inside main: " << &num << endl;

    displayAddress(num);

    return 0;
}