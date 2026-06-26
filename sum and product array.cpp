#include <iostream>
using namespace std;

void calculateSumAndProduct(int arr[], int size) {
    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
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

    calculateSumAndProduct(arr, n);

    return 0;
}