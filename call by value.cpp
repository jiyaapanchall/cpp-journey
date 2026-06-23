#include <iostream>
using namespace std;

void changeValue(int num) {
    num = 100;
    cout << "Inside Function: " << num << endl;
}

int main() {
    int num = 10;

    changeValue(num);

    cout << "Inside Main: " << num << endl;

    return 0;
}