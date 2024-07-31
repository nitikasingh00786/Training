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

// Function to find the middle node of the linked list
ListNode* findMiddle(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }
    
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;

    ListNode* head = new ListNode(values[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < values.size(); ++i) {
        curr->next = new ListNode(values[i]);
        curr = curr->next;
    }

    return head;
}

// Main function to test the findMiddle function
int main() {
    vector<int> values = {1, 2, 3, 4, 5};
    ListNode* head = createList(values);
    ListNode* middle = findMiddle(head);
    
    cout << "Middle node(s): ";
    printList(middle);

    // Cleanup memory (not shown here for brevity)

    return 0;
}
