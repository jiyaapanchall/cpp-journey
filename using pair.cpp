#include <iostream>
#include <utility>
using namespace std;

int main() {

    // Creating a pair
    pair<int, string> student;

    student.first = 101;
    student.second = "Rahul";

    cout << "Roll Number : " << student.first << endl;
    cout << "Name        : " << student.second << endl;

    return 0;
}