#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student(string n) {
        name = n;
        cout << "Constructor Called!" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called!" << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {

    Student s1("Rahul");

    s1.display();

    return 0;
}