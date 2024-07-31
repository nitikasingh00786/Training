#include<iostream>
#include<Bits/stdc++-2.h>
#include<vector>
using namespace std;
int countNegativeNumbers(vector<vector<int>>& mat) {
    int i = 0;
    int c = 0;
    int n = mat.size();
    int m = mat[0].size();

    while (i < n) {
        for (int j = m - 1; j >= 0; --j) {
            if (mat[i][j] < 0) {
                c++;
            } else {
                break;
            }
        }
        i++;
    }
    return c;
}

int main() {
    // Example usage
    vector<vector<int>> mat = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    int result = countNegativeNumbers(mat);
    cout << "Number of negative numbers: " << result << endl;

    return 0;
}
