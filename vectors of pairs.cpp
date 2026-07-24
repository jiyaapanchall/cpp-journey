#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<pair<int, string>> students;

    students.push_back({101, "Rahul"});
    students.push_back({102, "Priya"});
    students.push_back({103, "Amit"});

    for (auto student : students) {
        cout << student.first << " "
             << student.second << endl;
    }

    return 0;
}