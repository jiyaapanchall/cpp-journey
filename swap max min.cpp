#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size) {
    int maxIndex = 0;
    int minIndex = 0;

    // Find the indices of the maximum and minimum elements
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }

        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the maximum and minimum elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
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

    swapMaxMin(arr, n);

    cout << "Array after swapping maximum and minimum elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}