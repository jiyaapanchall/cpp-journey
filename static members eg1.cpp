#include <iostream>
using namespace std;

class Student {

private:
    int rollNo;
    string name;

public:

    // Static data member
    static int studentCount;

    // Constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;

        studentCount++;
    }

    // Display student details
    void display() {
        cout << "\nRoll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
    }

    // Static member function
    static void displayCount() {
        cout << "\nTotal Students = " << studentCount << endl;
    }
};

// Definition of static data member
int Student::studentCount = 0;

int main() {

    Student s1(101, "Rahul");
    Student s2(102, "Priya");
    Student s3(103, "Amit");

    s1.display();
    s2.display();
    s3.display();

    Student::displayCount();

    return 0;
}