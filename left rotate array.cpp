#include <iostream>
using namespace std;

void leftRotate(int arr[], int size) {
    int first = arr[0];

    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    leftRotate(arr, n);

    cout << "Array after left rotation: ";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}