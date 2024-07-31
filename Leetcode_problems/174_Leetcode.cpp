// leetcode : 503 Next Greater Element 2
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(arr[n-1]);


        for(int i = 2 * n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= arr[i % n]) {
                st.pop();
            }
            if(st.empty()) {
                ans[i % n] = -1;
            } else {
                ans[i % n] = st.top();
            }
            st.push(arr[i % n]);
        }
        return ans;
    }
};
int main() {
    Solution solution;
    vector<int> arr = {1, 2, 1};
    vector<int> result = solution.nextGreaterElements(arr);


    cout << "Next greater elements: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
