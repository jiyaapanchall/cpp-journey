#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T a, T b)
    {
        num1 = a;
        num2 = b;
    }

    void add()
    {
        cout << "Sum = " << num1 + num2 << endl;
    }
};

int main()
{
    Calculator<int> c1(10, 20);
    c1.add();

    Calculator<float> c2(5.5, 4.5);
    c2.add();

    return 0;
}