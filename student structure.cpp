#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student s1;

    cout << "Enter Student Name: ";
    getline(cin, s1.name);

    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details" << endl;
    cout << "---------------" << endl;
    cout << "Name        : " << s1.name << endl;
    cout << "Roll Number : " << s1.rollNumber << endl;
    cout << "Marks       : " << s1.marks << endl;

    return 0;
}