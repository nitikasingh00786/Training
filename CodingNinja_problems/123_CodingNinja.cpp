#include<iostream>
#include<vector>
#include<bitset>/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices) {
    int n = prices.size();
    int profit = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > profit) {
            profit = prices[i] - minPrice;
        }
    }

    return profit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int maxProfit = maximumProfit(prices);
    cout << "The maximum profit is: " << maxProfit << endl;

    return 0;
}
