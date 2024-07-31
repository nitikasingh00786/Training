#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    for (const auto& customer : accounts) {
        int currentWealth = accumulate(customer.begin(), customer.end(), 0);
        maxWealth = max(maxWealth, currentWealth);
    }
    return maxWealth;
}

int main() {
    vector<vector<int>> accounts1 = {{1, 2, 3}, {3, 2, 1}};
    cout << "The wealth of the richest customer: " << maximumWealth(accounts1) << endl; // Output: 6

    vector<vector<int>> accounts2 = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    cout << "The wealth of the richest customer: " << maximumWealth(accounts2) << endl; // Output: 17

    return 0;
}
