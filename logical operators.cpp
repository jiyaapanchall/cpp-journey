#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;

    // AND (&&)
    cout << "AND Operator: " << (age >= 18 && hasID) << endl;

    // OR (||)
    cout << "OR Operator: " << (age >= 18 || hasID) << endl;

    // NOT (!)
    cout << "NOT Operator: " << (!hasID) << endl;

    return 0;
}