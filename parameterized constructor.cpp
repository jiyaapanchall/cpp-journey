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

    void display() {
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
    }
};

int main() {

    Student s1("Rahul", 101);
    Student s2("Priya", 102);

    cout << "Student 1 Details\n";
    s1.display();

    cout << "\nStudent 2 Details\n";
    s2.display();

    return 0;
}