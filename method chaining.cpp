#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student& setName(string name) {
        this->name = name;
        return *this;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {

    Student s1;

    s1.setName("Rahul").display();

    return 0;
}