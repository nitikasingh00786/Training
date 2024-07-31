#include<iostream>
#include<bitset>/stdc++.h>
#include<vector>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int> arr3;

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3.push_back(arr1[i++]);
        } else {
            arr3.push_back(arr2[j++]);
        }
    }

    while (i < m) {
        arr3.push_back(arr1[i++]);
    }

    while (j < n) {
        arr3.push_back(arr2[j++]);
    }

    return arr3;
}

int main() {
    int m, n;
    cout << "Enter the size of the first array: ";
    cin >> m;
    cout << "Enter the size of the second array: ";
    cin >> n;

    vector<int> arr1(m);
    vector<int> arr2(n);

    cout << "Enter elements of the first array: ";
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    vector<int> result = ninjaAndSortedArrays(arr1, arr2, m, n);

    cout << "Merged array: ";
    for (const int& num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
