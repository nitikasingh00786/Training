#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end()); // Store nums in a set for quick lookup
        int count = 0;
        bool inComponent = false; // Track if we are currently in a connected component

        while (head != nullptr) {
            if (numSet.find(head->val) != numSet.end()) {
                // Current node's value is in nums
                if (!inComponent) {
                    // We are starting a new component
                    count++;
                    inComponent = true;
                }
            } else {
                // Current node's value is not in nums
                inComponent = false;
            }
            head = head->next; // Move to the next node
        }

        return count;
    }
};

// Helper function to create a linked list from a vector
ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Helper function to delete the linked list
void deleteLinkedList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Example 1
    vector<int> listValues = {0, 1, 2, 3};
    vector<int> nums = {0, 1, 3};

    ListNode* head = createLinkedList(listValues);

    Solution solution;
    int result = solution.numComponents(head, nums);

    cout << "Number of connected components: " << result << endl; // Expected output: 2

    // Clean up
    deleteLinkedList(head);

    return 0;
}
