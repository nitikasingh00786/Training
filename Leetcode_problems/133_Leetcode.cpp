#include<iostream>
#include<Bits/stdc++-2.h>
using namespace std;

vector<vector<int>> reshapeMatrix(vector<vector<int>>& mat, int r, int c) {
    int originalRows = mat.size();
    int originalCols = mat[0].size();
    
    // Check if reshape is possible
    if (originalRows * originalCols != r * c) {
        return mat;  // Return original matrix if reshape is not possible
    }
    
    vector<vector<int>> reshaped(r, vector<int>(c));
    int row = 0, col = 0;

    // Traverse the original matrix and fill the reshaped matrix
    for (int i = 0; i < originalRows; ++i) {
        for (int j = 0; j < originalCols; ++j) {
            reshaped[row][col] = mat[i][j];
            ++col;
            if (col == c) {
                col = 0;
                ++row;
            }
        }
    }
    
    return reshaped;
}

int main() {
    // Example usage
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1, c = 4;

    vector<vector<int>> result = reshapeMatrix(mat, r, c);

    // Print the reshaped matrix
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}