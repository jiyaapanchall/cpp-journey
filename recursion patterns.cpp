#include <iostream>
using namespace std;

// 1. Print N to 1
void printNto1(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    printNto1(n - 1);
}

// 2. Print Even Numbers
void printEven(int n) {
    if (n == 0)
        return;

    printEven(n - 1);

    if (n % 2 == 0)
        cout << n << " ";
}

// 3. Print Odd Numbers
void printOdd(int n) {
    if (n == 0)
        return;

    printOdd(n - 1);

    if (n % 2 != 0)
        cout << n << " ";
}

// 4. Sum of Digits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;

    return n % 10 + sumOfDigits(n / 10);
}

// 5. Count Digits
int countDigits(int n) {
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

// 6. Reverse Number
int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

// 7. Check Sorted Array
bool isSorted(int arr[], int n) {
    if (n == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    return isSorted(arr + 1, n - 1);
}

// 8. Find Maximum
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    return max(arr[0], findMax(arr + 1, n - 1));
}

// 9. First Occurrence
int firstOccurrence(int arr[], int n, int key, int index = 0) {

    if (index == n)
        return -1;

    if (arr[index] == key)
        return index;

    return firstOccurrence(arr, n, key, index + 1);
}

// 10. Last Occurrence
int lastOccurrence(int arr[], int index, int key) {

    if (index < 0)
        return -1;

    if (arr[index] == key)
        return index;

    return lastOccurrence(arr, index - 1, key);
}

int main() {

    int arr[] = {1, 2, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Print N to 1: ";
    printNto1(5);

    cout << "\n\nEven Numbers: ";
    printEven(10);

    cout << "\n\nOdd Numbers: ";
    printOdd(10);

    cout << "\n\nSum of Digits (1234): ";
    cout << sumOfDigits(1234);

    cout << "\n\nCount Digits (12345): ";
    cout << countDigits(12345);

    cout << "\n\nReverse Number (1234): ";
    cout << reverseNumber(1234);

    cout << "\n\nArray Sorted? ";
    cout << (isSorted(arr, n) ? "Yes" : "No");

    cout << "\n\nMaximum Element: ";
    cout << findMax(arr, n);

    cout << "\n\nFirst Occurrence of 2: ";
    cout << firstOccurrence(arr, n, 2);

    cout << "\n\nLast Occurrence of 2: ";
    cout << lastOccurrence(arr, n - 1, 2);

    return 0;
}