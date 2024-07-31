#include<iostream>
#include<vector>
#include<map>
#include<bitset>/stdc++.h>
using namespace std;

int occursOnce(vector<int> &arr, int n) {
    int num = 0;
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for (auto itr = mpp.begin(); itr != mpp.end(); itr++) {
        if (itr->second == 1) {
            num = itr->first;
            break;
        }
    }

    return num;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = occursOnce(arr, n);
    cout << "The element that occurs only once is: " << result << endl;

    return 0;
}
