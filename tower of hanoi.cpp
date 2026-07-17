#include <iostream>
using namespace std;

// Recursive Function
void towerOfHanoi(int n, char source, char helper, char destination) {

    // Base Case
    if (n == 1) {
        cout << "Move Disk 1 from " << source
             << " to " << destination << endl;
        return;
    }

    // Step 1
    towerOfHanoi(n - 1, source, destination, helper);

    // Step 2
    cout << "Move Disk " << n << " from "
         << source << " to " << destination << endl;

    // Step 3
    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {

    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}