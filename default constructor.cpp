#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    // Default Constructor
    Student() {
        name = "Not Assigned";
        rollNumber = 0;
        cout << "Default Constructor Called!" << endl;
    }

    void display() {
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
    }
};

int main() {

    Student s1;

    cout << "\nStudent Details" << endl;
    s1.display();

    return 0;
}