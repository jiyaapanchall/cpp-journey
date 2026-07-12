#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived Class (inherits Animal)
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};

// Derived Class (inherits Mammal)
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {

    Dog d1;

    d1.eat();
    d1.walk();
    d1.bark();

    return 0;
}