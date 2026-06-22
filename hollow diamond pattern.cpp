#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    // Upper Half
    for(int i = 1; i <= n; i++) {

        // Leading spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Hollow part
        for(int j = 1; j <= (2 * i - 1); j++) {
            if(j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Lower Half
    for(int i = n - 1; i >= 1; i--) {

        // Leading spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Hollow part
        for(int j = 1; j <= (2 * i - 1); j++) {
            if(j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}