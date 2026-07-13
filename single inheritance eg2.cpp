#include <iostream>
using namespace std;

class Person {
public:
    void displayName() {
        cout << "Name: Rahul" << endl;
    }
};

class Student : public Person {
public:
    void displayRoll() {
        cout << "Roll Number: 101" << endl;
    }
};

int main() {

    Student s;

    s.displayName();
    s.displayRoll();

    return 0;
}