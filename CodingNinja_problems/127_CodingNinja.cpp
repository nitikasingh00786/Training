#include<iostream>
#include<vector>
#include<bitset>/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int ans = 0;
    // XOR all elements in the array
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    // XOR the result with all numbers from 1 to n-1 (since array contains numbers from 1 to n-1 and one duplicate)
    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 3, 4, 2, 2};
    cout << "Duplicate in Test Case 1: " << findDuplicate(arr1) << endl;

    vector<int> arr2 = {3, 1, 3, 4, 2};
    cout << "Duplicate in Test Case 2: " << findDuplicate(arr2) << endl;

    vector<int> arr3 = {1, 1};
    cout << "Duplicate in Test Case 3: " << findDuplicate(arr3) << endl;

    return 0;
}
