#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

int main() {

    Animal a;
    Dog d;

    cout << "Animal Object:" << endl;
    a.sound();

    cout << "\nDog Object:" << endl;
    d.sound();

    return 0;
}