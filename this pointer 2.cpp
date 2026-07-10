#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int length) {
        this->length = length;
    }

    void display() {
        cout << "Length = " << this->length << endl;
    }
};

int main() {

    Box b1(25);

    b1.display();

    return 0;
}