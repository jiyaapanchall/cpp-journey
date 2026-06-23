#include <iostream>
using namespace std;

void functionB() {
    cout << "Function B Executed" << endl;
}

void functionA() {
    cout << "Function A Executed" << endl;
    functionB();
}

int main() {
    cout << "Main Function" << endl;
    functionA();

    return 0;
}