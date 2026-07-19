#include <iostream>
using namespace std;

// Merge two sorted subarrays
void merge(int arr[], int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArray[n1];
    int rightArray[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        rightArray[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    // Merge the temporary arrays
    while (i < n1 && j < n2) {

        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        }
        else {
            arr[k] = rightArray[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements
    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

// Merge Sort Function
void mergeSort(int arr[], int left, int right) {

    if (left < right) {

        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge both halves
        merge(arr, left, mid, right);
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}