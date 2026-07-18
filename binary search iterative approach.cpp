#include <iostream>
using namespace std;

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {

    int left = 0;
    int right = n - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;

        else if (key < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1;
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Element Found at Index " << index;
    else
        cout << "Element Not Found";

    return 0;
}