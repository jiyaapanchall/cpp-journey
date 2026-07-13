#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {

    Dog d1;

    d1.eat();   // Inherited from Animal
    d1.bark();  // Dog's own function

    return 0;
}