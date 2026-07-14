#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    virtual void draw() = 0;
};

// Derived Class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived Class
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {

    Circle c;
    Rectangle r;

    c.draw();
    r.draw();

    return 0;
}