#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to detect cycle using Floyd's Cycle Detection Algorithm
bool detectCycle(Node* head) {
    if (head == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; // Cycle detected
        }
    }

    return false; // No cycle detected
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to delete the linked list
void deleteList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Create nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Create a cycle for testing
    head->next->next->next->next = head->next; // Create a cycle (4 -> 2)

    if (detectCycle(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    // Clean up
    deleteList(head);

    return 0;
}
