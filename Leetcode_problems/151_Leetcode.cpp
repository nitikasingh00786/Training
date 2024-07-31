#include <iostream>
#include<vector>

using namespace std;

// Definition for singly-linked list node.
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a segment of the linked list
ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) return head;

    // Create a dummy node to handle edge cases like reversing from the head
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;

    // Move prev to the node just before the 'left' position
    for (int i = 1; i < left; ++i) {
        prev = prev->next;
    }

    // Initialize pointers for reversal
    ListNode* start = prev->next; // The first node to be reversed
    ListNode* then = start->next; // The node that will be moved

    // Reverse the sublist between left and right
    for (int i = 0; i < right - left; ++i) {
        start->next = then->next;
        then->next = prev->next;
        prev->next = then;
        then = start->next;
    }

    // Return the new head of the list
    ListNode* newHead = dummy->next;
    delete dummy; // Clean up the dummy node
    return newHead;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); ++i) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Test the function
int main() {
    vector<int> values = {1, 2, 3, 4, 5};
    ListNode* head = createList(values);
    int left = 2, right = 4;
    ListNode* newHead = reverseBetween(head, left, right);
    printList(newHead); // Output should be: 1 4 3 2 5
    return 0;
}
