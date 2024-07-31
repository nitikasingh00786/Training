#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int C = A[0].size();
        for (auto& row : A) {
            for (int i = 0; i < (C + 1) / 2; ++i) {
                // Swap and invert the values
                int tmp = row[i] ^ 1;
                row[i] = row[C - 1 - i] ^ 1;
                row[C - 1 - i] = tmp;
            }
        }
        return A;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> A = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> result = solution.flipAndInvertImage(A);
    
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
