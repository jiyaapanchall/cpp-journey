#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student students[n];

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Marks: ";
        cin >> students[i].marks;

        cin.ignore();
    }

    cout << "\n========== Student Information ==========\n";

    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name        : " << students[i].name << endl;
        cout << "Roll Number : " << students[i].rollNumber << endl;
        cout << "Marks       : " << students[i].marks << endl;
    }

    return 0;
}