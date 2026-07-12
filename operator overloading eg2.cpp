#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    bool operator==(Number obj) {
        return value == obj.value;
    }
};

int main() {

    Number n1(50);
    Number n2(50);

    if (n1 == n2)
        cout << "Both objects are equal.";
    else
        cout << "Objects are not equal.";

    return 0;
}