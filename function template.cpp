#include <iostream>
using namespace std;

// Function Template
template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Maximum Integer: " << maximum(10, 20) << endl;

    cout << "Maximum Float: " << maximum(10.5, 8.2) << endl;

    cout << "Maximum Character: " << maximum('A', 'Z') << endl;

    return 0;
}