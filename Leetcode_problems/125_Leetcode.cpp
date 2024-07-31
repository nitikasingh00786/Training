#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<bitset>/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numSet;
        for (int num : nums) {
            if (numSet.find(num) != numSet.end()) {
                return true;
            }
            numSet.insert(num);
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    cout << "Test Case 1: " << (solution.containsDuplicate(nums1) ? "true" : "false") << endl;
    cout << "Test Case 2: " << (solution.containsDuplicate(nums2) ? "true" : "false") << endl;
    cout << "Test Case 3: " << (solution.containsDuplicate(nums3) ? "true" : "false") << endl;

    return 0;
}
