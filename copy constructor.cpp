#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    // Parameterized Constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        rollNumber = s.rollNumber;

        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
    }
};

int main() {

    Student s1("Rahul", 101);

    // Copying object
    Student s2 = s1;

    cout << "\nStudent 1 Details\n";
    s1.display();

    cout << "\nStudent 2 Details\n";
    s2.display();

    return 0;
}