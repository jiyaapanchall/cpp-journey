#include <iostream>
using namespace std;

// Base Class
class Employee {
public:
    virtual void work() {
        cout << "Employee is working." << endl;
    }

    virtual ~Employee() {}
};

// Derived Class
class Developer : public Employee {
public:
    void work() override {
        cout << "Developer is writing code." << endl;
    }
};

// Derived Class
class Designer : public Employee {
public:
    void work() override {
        cout << "Designer is creating UI designs." << endl;
    }
};

int main() {

    Employee *emp;

    Developer dev;
    Designer des;

    emp = &dev;
    emp->work();

    emp = &des;
    emp->work();

    return 0;
}