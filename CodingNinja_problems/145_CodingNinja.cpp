#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to remove nodes with value k from the linked list
Node* removeNodes(Node* head, int k) {
    if (head == nullptr) {
        return nullptr;
    }
    head->next = removeNodes(head->next, k);
    if (head->data == k) {
        return head->next;
    }
    return head;
}

// Helper function to create a linked list from an array
Node* createList(const int arr[], int size) {
    if (size == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
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

// Function to delete the linked list
void deleteList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Test cases
    int arr[] = {1, 2, 6, 3, 4, 5, 6};
    Node* list = createList(arr, 7);

    cout << "Original List: ";
    printList(list);

    int k = 6;
    list = removeNodes(list, k);

    cout << "List after removing nodes with value " << k << ": ";
    printList(list);

    // Clean up
    deleteList(list);

    return 0;
}
