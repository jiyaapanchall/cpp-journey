#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter Age: ";
    cin >> age;

    try {

        if (age < 18)
            throw age;

        cout << "Eligible for Voting." << endl;
    }

    catch (int a) {
        cout << "Age " << a << " is not eligible for voting." << endl;
    }

    return 0;
}