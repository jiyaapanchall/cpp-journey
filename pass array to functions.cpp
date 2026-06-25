#include <iostream>
using namespace std;

void updateArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Before Function Call: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    updateArray(arr, 5);

    cout << "\nAfter Function Call: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}