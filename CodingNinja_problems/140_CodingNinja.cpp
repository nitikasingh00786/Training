#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for singly-linked list.
struct Node {
    int data;
    Node *next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Function to remove duplicates from a sorted linked list
Node* removeDuplicates(Node* head) {
    if (head == nullptr) {
        return head;
    }
    
    unordered_map<int, bool> visited;
    Node* prev = nullptr;
    Node* curr = head;
    
    while (curr != nullptr) {
        if (visited[curr->data]) {
            // Duplicate node found
            Node* temp = curr;
            curr = curr->next;
            delete temp;  // Free memory of the duplicate node
            prev->next = curr;
        } else {
            // Node is not a duplicate
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
    
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 2 -> 4 -> 1 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(1);
    head->next->next->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    head = removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    // Clean up allocated memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
