#include <iostream>
#include <string>
using namespace std;

class Student {

private:
    int rollNo;
    string name;
    float marks;

public:

    // Default Constructor
    Student() {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0.0;

        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;

        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        marks = s.marks;

        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main() {

    // Default Constructor
    Student s1;
    s1.display();

    // Parameterized Constructor
    Student s2(101, "Rahul", 89.5);
    s2.display();

    // Copy Constructor
    Student s3(s2);
    s3.display();

    return 0;
}