#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {

protected:
    string name;
    int age;

public:

    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived Class
class Student : public Person {

private:
    int rollNo;
    float marks;

public:

    void setStudentDetails(int r, float m) {
        rollNo = r;
        marks = m;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main() {

    Student s1;

    s1.setPersonDetails("Rahul", 20);
    s1.setStudentDetails(101, 89.5);

    cout << "----- Student Details -----" << endl;
    s1.displayStudentDetails();

    return 0;
}