#include <algorithm>
#include <iostream>
using namespace std;
void BubbleSort(vector<int> &arr) {
    int n=arr.size();
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void SelectionSort(vector<int> &arr) {
    int n=arr.size();
    for (int i=0;i<n-1;i++) {
        int min_index=i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[min_index])
                min_index=j;
        }
        swap(arr[i],arr[min_index]);
    }
}
void InsertionSort(vector<int>& arr) {
    for (size_t i=1;i<arr.size();++i) {
        int key=arr[i];
        auto it=upper_bound(arr.begin(),arr.begin()+i,key);
        rotate(it,arr.begin()+i,arr.begin()+i+1);
    }
}
void MergeSort(vector<int> &arr) {
    stable_sort(arr.begin(),arr.end());
}
