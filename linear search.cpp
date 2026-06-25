#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
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

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = linearSearch(arr, n, target);

    if(index != -1) {
        cout << "Element found at index " << index;
    } else {
        cout << "Element not found";
    }

    return 0;
}