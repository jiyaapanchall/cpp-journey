#include <iostream>
using namespace std;

// Function for Counting Sort
void countingSort(int arr[], int n) {

    // Find maximum element
    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    // Create counting array
    int count[maxElement + 1] = {0};

    // Store frequency
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Reconstruct sorted array
    int index = 0;

    for (int i = 0; i <= maxElement; i++) {

        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    countingSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}