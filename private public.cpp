#include <iostream>
using namespace std;

class Student {

public:
    string name;

private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    Student s1;

    cout << "Enter Name: ";
    getline(cin, s1.name);

    cout << "Enter Age: ";
    int a;
    cin >> a;

    s1.setAge(a);

    cout << "\nStudent Details\n";
    s1.display();

    return 0;
}