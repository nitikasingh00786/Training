#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to find the intersection node of two linked lists
Node* findIntersection(Node* firstHead, Node* secondHead) {
    Node* l1 = firstHead;
    Node* l2 = secondHead;

    if (l1 == nullptr || l2 == nullptr)
        return nullptr;

    while (l1 != l2) {
        l1 = l1 != nullptr ? l1->next : secondHead;
        l2 = l2 != nullptr ? l2->next : firstHead;
    }

    return l1;
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

int main() {
    // Create first linked list
    int arr1[] = {1, 2, 3, 4, 5};
    Node* firstHead = createList(arr1, 5);

    // Create second linked list
    int arr2[] = {6, 7};
    Node* secondHead = createList(arr2, 2);

    // Create intersection
    Node* intersection = new Node(8);
    intersection->next = new Node(9);
    intersection->next->next = new Node(10);

    // Attach intersection to the end of first and second lists
    Node* temp = firstHead;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = intersection;

    temp = secondHead;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = intersection;

    // Find intersection
    Node* result = findIntersection(firstHead, secondHead);

    // Print result
    if (result != nullptr) {
        cout << "Intersection at node with value: " << result->data << endl;
    } else {
        cout << "No intersection found" << endl;
    }

    // Clean up
    deleteList(firstHead);
    deleteList(secondHead);
    deleteList(intersection);

    return 0;
}
