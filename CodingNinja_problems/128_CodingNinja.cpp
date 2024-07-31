#include<iostream>
#include<bitset>/stdc++.h>
using namespace std;

void moveZerosToLeft(int *arr, int n) {
    int first = 0;
    // Move all non-zero elements to the front of the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[first] = arr[i];
            first++;
        }
    }
    // Calculate the number of zeros
    int num = n - first;
    // Shift non-zero elements to the right to make space for zeros at the beginning
    for (int i = first - 1; i >= 0; i--) {
        arr[i + num] = arr[i];
    }
    // Fill the beginning of the array with zeros
    for (int i = 0; i < num; i++) {
        arr[i] = 0;
    }
}

int main() {
    int arr1[] = {1, 0, 2, 0, 3, 0, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    moveZerosToLeft(arr1, n1);
    cout << "Array after moving zeros to left: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[] = {0, 1, 0, 3, 12};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    moveZerosToLeft(arr2, n2);
    cout << "Array after moving zeros to left: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
