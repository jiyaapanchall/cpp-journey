#include <iostream>
using namespace std;

// Recursive Function
int binarySearch(int arr[], int left, int right, int key) {

    // Base Case
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    // Element Found
    if (arr[mid] == key)
        return mid;

    // Search Left Half
    if (key < arr[mid])
        return binarySearch(arr, left, mid - 1, key);

    // Search Right Half
    return binarySearch(arr, mid + 1, right, key);
}

int main() {

    int arr[] = {2, 4, 6, 8, 10, 12};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1)
        cout << "Element Found at Index " << index;
    else
        cout << "Element Not Found";

    return 0;
}