#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Function to find the middle of the linked list
Node *grtMid(Node *head) {
    // If the list is empty or has only one node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    // If the list has 2 nodes
    if (head->next->next == nullptr) {
        return head->next;
    }
    Node *slow = head;
    Node *fast = head->next;
    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node *findMiddle(Node *head) {
    return grtMid(head);
}

int main() {
    // Create a linked list for testing: 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the middle node
    Node *middle = findMiddle(head);

    // Output the middle node's data
    if (middle != nullptr) {
        cout << "The middle node's data is: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    // Clean up allocated memory
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
