#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Parameterized Constructor
    Student(string name, int rollNumber) {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    void display() {
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
    }
};

int main() {

    Student s1("Rahul", 101);

    s1.display();

    return 0;
}