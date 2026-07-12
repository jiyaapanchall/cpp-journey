#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived Class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {

    Animal *a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}