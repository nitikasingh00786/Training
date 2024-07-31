#include<iostream>
#include<Bits/stdc++-2.h>
using namespace std;

int projectionArea(vector<vector<int>> &grid) {
    int row = grid.size();
    int col = grid[0].size();
    int xy = 0, yz = 0, zx = 0;

    // Calculate the top-down projection area (xy)
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] > 0) {
                xy++;
            }
        }
    }

    // Calculate the front projection area (yz)
    for (int i = 0; i < row; i++) {
        yz += *max_element(grid[i].begin(), grid[i].end());
    }

    // Calculate the side projection area (zx)
    for (int j = 0; j < col; j++) {
        int maxInCol = INT_MIN;
        for (int i = 0; i < row; i++) {
            maxInCol = max(maxInCol, grid[i][j]);
        }
        zx += maxInCol;
    }

    return xy + yz + zx;
}

int main() {
    // Example usage
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Projection Area: " << projectionArea(grid) << endl;

    return 0;
}