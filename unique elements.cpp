#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        bool isUnique = true;

        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements are: ";
    printUnique(arr, n);

    return 0;
}