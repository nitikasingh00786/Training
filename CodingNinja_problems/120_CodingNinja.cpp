#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> twoSum(vector<int>& arr, int target, int n) {
    vector<pair<int, int>> answer;

    sort(arr.begin(), arr.end());
    int s = 0;
    int end = n - 1;
    while (s < end) {
        if (arr[s] + arr[end] == target) {
            answer.push_back({arr[s], arr[end]});
            s++;
            end--;
        } else if (arr[s] + arr[end] < target) {
            s++;
        } else if (arr[s] + arr[end] > target) {
            end--;
        }
    }
    if (answer.empty()) {
        answer.push_back({-1, -1});
    }

    return answer;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, target;
        cin >> N >> target;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        vector<pair<int, int>> pairs = twoSum(arr, target, N);

        for (const auto& p : pairs) {
            cout << p.first << " " << p.second << endl;
        }
    }

    return 0;
}
