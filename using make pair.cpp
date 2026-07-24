#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int, char> p;

    p = make_pair(10, 'A');

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}