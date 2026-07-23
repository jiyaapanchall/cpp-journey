#include <iostream>
using namespace std;

int main() {

    try {

        throw 10;

    }

    catch (int x) {
        cout << "Integer Exception: " << x << endl;
    }

    catch (...) {
        cout << "Unknown Exception" << endl;
    }

    return 0;
}