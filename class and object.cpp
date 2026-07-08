#include <iostream>
using namespace std;

// Class Definition
class Student {
public:
    string name;
    int rollNumber;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {

    // Object Creation
    Student s1;

    cout << "Enter Name: ";
    getline(cin, s1.name);

    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "\nStudent Details\n";
    s1.display();

    return 0;
}