#include <iostream>
using namespace std;

void changeValue(int &num) {
    num = 100;
}

int main() {
    int num = 10;

    changeValue(num);

    cout << "Value: " << num << endl;

    return 0;
}