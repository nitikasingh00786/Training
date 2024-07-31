#include<iostream>
#include<Bits/stdc++-2.h>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Check diagonals starting from the first row
        for (int col = 0; col < n; ++col) {
            int startRow = 0;
            int startCol = col;
            if (!checkDiagonal(matrix, startRow, startCol)) {
                return false;
            }
        }

        // Check diagonals starting from the first column
        for (int row = 0; row < m; ++row) {
            int startRow = row;
            int startCol = 0;
            if (!checkDiagonal(matrix, startRow, startCol)) {
                return false;
            }
        }

        return true;
    }

private:
    bool checkDiagonal(vector<vector<int>>& matrix, int startRow, int startCol) {
        int value = matrix[startRow][startCol];
        int m = matrix.size();
        int n = matrix[0].size();

        while (startRow < m && startCol < n) {
            if (matrix[startRow][startCol] != value) {
                return false;
            }
            ++startRow;
            ++startCol;
        }

        return true;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };

    bool result = sol.isToeplitzMatrix(matrix);
    cout << (result ? "true" : "false") << endl; // Output: true

    return 0;
}
