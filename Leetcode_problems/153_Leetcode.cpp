#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list node.
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to split the linked list into k parts
vector<ListNode*> splitListToParts(ListNode* head, int k) {
    // Step 1: Find the length of the linked list
    int length = 0;
    ListNode* curr = head;
    while (curr) {
        length++;
        curr = curr->next;
    }

    // Step 2: Determine the size of each part
    int partSize = length / k;
    int extraNodes = length % k;

    // Step 3: Create the k parts
    vector<ListNode*> parts(k, nullptr);
    curr = head;
    for (int i = 0; i < k; ++i) {
        ListNode* partHead = curr;
        ListNode* partTail = nullptr;
        int currentPartSize = partSize + (i < extraNodes ? 1 : 0);

        // Traverse the current part
        for (int j = 0; j < currentPartSize; ++j) {
            partTail = curr;
            curr = curr->next;
        }

        // Disconnect the current part from the next part
        if (partTail) {
            partTail->next = nullptr;
        }

        // Add the current part to the result
        parts[i] = partHead;
    }

    return parts;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to print the parts
void printParts(const vector<ListNode*>& parts) {
    for (const auto& part : parts) {
        printList(part);
    }
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

// Main function to test the splitListToParts function
int main() {
    vector<int> values = {1, 2, 3};
    int k = 5;
    ListNode* head = createList(values);
    vector<ListNode*> parts = splitListToParts(head, k);
    printParts(parts);

    // Cleanup memory (not shown here for brevity)

    return 0;
}
