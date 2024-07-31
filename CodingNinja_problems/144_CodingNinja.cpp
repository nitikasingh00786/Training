#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list node
template <typename T>
struct LinkedListNode {
    T data;
    LinkedListNode* next;

    LinkedListNode(T value) : data(value), next(nullptr) {}
};

// Function to check if the linked list is a palindrome
bool isPalindrome(LinkedListNode<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;
    }

    vector<int> arr;
    LinkedListNode<int>* current = head;

    // Traverse the linked list and store elements in vector
    while (current != nullptr) {
        arr.push_back(current->data);
        current = current->next;
    }

    // Check if the vector is a palindrome
    int i = 0;
    int j = arr.size() - 1;
    while (i <= j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// Helper function to create a linked list from an array
LinkedListNode<int>* createList(const int arr[], int size) {
    if (size == 0) return nullptr;
    LinkedListNode<int>* head = new LinkedListNode<int>(arr[0]);
    LinkedListNode<int>* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new LinkedListNode<int>(arr[i]);
        current = current->next;
    }
    return head;
}

// Function to print the linked list
void printList(LinkedListNode<int>* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to delete the linked list
void deleteList(LinkedListNode<int>* head) {
    while (head != nullptr) {
        LinkedListNode<int>* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Test cases
    int arr1[] = {1, 2, 3, 2, 1};
    LinkedListNode<int>* list1 = createList(arr1, 5);

    int arr2[] = {1, 2, 3, 4, 5};
    LinkedListNode<int>* list2 = createList(arr2, 5);

    cout << "List 1: ";
    printList(list1);
    cout << "Is List 1 a palindrome? " << (isPalindrome(list1) ? "Yes" : "No") << endl;

    cout << "List 2: ";
    printList(list2);
    cout << "Is List 2 a palindrome? " << (isPalindrome(list2) ? "Yes" : "No") << endl;

    // Clean up
    deleteList(list1);
    deleteList(list2);

    return 0;
}
