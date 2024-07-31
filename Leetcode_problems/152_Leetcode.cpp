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

// Function to detect the start of the cycle
ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) return nullptr;
    
    ListNode* slow = head;
    ListNode* fast = head;

    // Step 1: Detect if there is a cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            // Cycle detected
            break;
        }
    }

    // If no cycle is detected
    if (!fast || !fast->next) return nullptr;

    // Step 2: Find the start of the cycle
    ListNode* start = head;
    while (start != slow) {
        start = start->next;
        slow = slow->next;
    }

    return start;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list with a cycle
ListNode* createListWithCycle(vector<int> values, int pos) {
    if (values.empty()) return nullptr;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* curr = head;
    vector<ListNode*> nodeList;
    nodeList.push_back(head);

    for (int i = 1; i < values.size(); ++i) {
        curr->next = new ListNode(values[i]);
        curr = curr->next;
        nodeList.push_back(curr);
    }

    if (pos >= 0) {
        curr->next = nodeList[pos];
    }

    return head;
}

// Test the function
int main() {
    vector<int> values = {3, 2, 0, -4};
    int pos = 1;
    ListNode* head = createListWithCycle(values, pos);
    ListNode* cycleStart = detectCycle(head);
    if (cycleStart) {
        cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected" << endl;
    }
    return 0;
}
