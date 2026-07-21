#include <iostream>
using namespace std;

// First Occurrence
int firstOccurrence(int arr[], int n, int key) {

    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return ans;
}

// Last Occurrence
int lastOccurrence(int arr[], int n, int key) {

    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return ans;
}

// Count Occurrences
int countOccurrences(int arr[], int n, int key) {

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if (first == -1)
        return 0;

    return last - first + 1;
}

// Move Zeroes to End
void moveZeroes(int arr[], int n) {

    int j = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// Sort 0s, 1s and 2s (Dutch National Flag)
void sort012(int arr[], int n) {

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {

        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);

        else if (arr[mid] == 1)
            mid++;

        else
            swap(arr[mid], arr[high--]);
    }
}

int main() {

    int arr1[] = {1,2,2,2,3,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    cout << "First Occurrence of 2: "
         << firstOccurrence(arr1,n1,2) << endl;

    cout << "Last Occurrence of 2: "
         << lastOccurrence(arr1,n1,2) << endl;

    cout << "Count of 2: "
         << countOccurrences(arr1,n1,2) << endl;

    int arr2[] = {0,1,0,3,12};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    moveZeroes(arr2,n2);

    cout << "\nMove Zeroes: ";

    for(int i=0;i<n2;i++)
        cout<<arr2[i]<<" ";

    cout<<endl;

    int arr3[]={2,0,2,1,1,0};
    int n3=sizeof(arr3)/sizeof(arr3[0]);

    sort012(arr3,n3);

    cout<<"\nSorted 0s 1s 2s: ";

    for(int i=0;i<n3;i++)
        cout<<arr3[i]<<" ";

    return 0;
}