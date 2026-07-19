#include <iostream>
using namespace std;

class Student {

private:
    int rollNo;

public:

    // Constructor
    Student(int r) {
        rollNo = r;
        cout << "Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "Roll Number: " << rollNo << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for Roll Number "
             << rollNo << endl;
    }
};

int main() {

    Student s1(101);

    s1.display();

    return 0;
}