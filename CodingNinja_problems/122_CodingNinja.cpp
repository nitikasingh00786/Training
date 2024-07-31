#include<iostream>
#include<vector>
#include<bitset>/stdc++.h>
using namespace std;

vector<long long int> generateRow(int row) {
    vector<long long int> arr;
    long long ans = 1;
    arr.push_back(1);

    for (int col = 1; col < row; col++) { 
        ans = ans * (row - col);
        ans = ans / col;
        arr.push_back(ans);
    }

    return arr;
}

vector<vector<long long int>> printPascal(int n) {
    vector<vector<long long int>> ans;

    for (int i = 1; i <= n; i++) {
        ans.push_back(generateRow(i));
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    vector<vector<long long int>> pascalTriangle = printPascal(n);

    cout << "Pascal's Triangle:" << endl;
    for (const auto& row : pascalTriangle) {
        for (long long int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
