#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {

    Dog d1;
    Cat c1;

    cout << "Dog:" << endl;
    d1.eat();
    d1.bark();

    cout << endl;

    cout << "Cat:" << endl;
    c1.eat();
    c1.meow();

    return 0;
}