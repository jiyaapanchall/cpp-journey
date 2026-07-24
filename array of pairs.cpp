#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int, string> students[3];

    students[0] = {101, "Rahul"};
    students[1] = {102, "Priya"};
    students[2] = {103, "Amit"};

    for (int i = 0; i < 3; i++) {
        cout << students[i].first << " "
             << students[i].second << endl;
    }

    return 0;
}