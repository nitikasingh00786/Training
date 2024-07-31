#include<iostream>
#include<bitset>/stdc++.h>
using namespace std;

int findMajorityElement(int nums[], int n) {
    int element = nums[0];
    int count = 1;

    // Apply Moore's Voting Algorithm
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            element = nums[i];
            count = 1;
        } else if (nums[i] == element) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    // Verify the element
    for (int i = 0; i < n; i++) {
        if (nums[i] == element) count++;
    }

    return count > floor(n / 2) ? element : -1;
}

int main() {
    int nums1[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Majority Element in Test Case 1: " << findMajorityElement(nums1, n1) << endl;

    int nums2[] = {3, 3, 4, 2, 4, 4, 2, 4};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Majority Element in Test Case 2: " << findMajorityElement(nums2, n2) << endl;

    int nums3[] = {2, 2, 1, 1, 1, 2, 2};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    cout << "Majority Element in Test Case 3: " << findMajorityElement(nums3, n3) << endl;

    return 0;
}
