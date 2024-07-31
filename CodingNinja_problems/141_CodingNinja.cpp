#include <iostream>
using namespace std;

// Definition for singly-linked list node
template <typename T>
struct Node {
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};

// Function to merge and sort two linked lists
template <typename T>
Node<T>* solve(Node<T>* first, Node<T>* second) {
    if (first == nullptr) return second;
    if (second == nullptr) return first;

    Node<T>* dummy = new Node<T>(0);
    Node<T>* tail = dummy;

    while (first != nullptr && second != nullptr) {
        if (first->data <= second->data) {
            tail->next = first;
            first = first->next;
        } else {
            tail->next = second;
            second = second->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (first != nullptr) {
        tail->next = first;
    } else {
        tail->next = second;
    }

    Node<T>* mergedList = dummy->next;
    delete dummy;  // Free the dummy node
    return mergedList;
}

// Function to sort two linked lists
template <typename T>
Node<T>* sortTwoLists(Node<T>* first, Node<T>* second) {
    if (first == nullptr) return second;
    if (second == nullptr) return first;

    if (first->data <= second->data) {
        return solve(first, second);
    } else {
        return solve(second, first);
    }
}

// Function to print the linked list
template <typename T>
void printList(Node<T>* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to free the linked list memory
template <typename T>
void deleteList(Node<T>* head) {
    while (head != nullptr) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Create first sorted linked list: 1 -> 3 -> 5
    Node<int>* first = new Node<int>(1);
    first->next = new Node<int>(3);
    first->next->next = new Node<int>(5);

    // Create second sorted linked list: 2 -> 4 -> 6
    Node<int>* second = new Node<int>(2);
    second->next = new Node<int>(4);
    second->next->next = new Node<int>(6);

    cout << "First list: ";
    printList(first);

    cout << "Second list: ";
    printList(second);

    // Merge and sort the two linked lists
    Node<int>* sortedList = sortTwoLists(first, second);

    cout << "Merged and sorted list: ";
    printList(sortedList);

    // Free allocated memory
    deleteList(sortedList);

    return 0;
}
