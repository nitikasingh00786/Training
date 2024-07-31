#include <iostream>

using namespace std;

// Definition for singly-linked list node.
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class MyLinkedList {
private:
    ListNode *head;
    int size; // To keep track of the size of the linked list

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1; // Index is invalid
        }
        ListNode *current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        ListNode *newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
        ++size;
    }

    void addAtTail(int val) {
        ListNode *newNode = new ListNode(val);
        if (size == 0) {
            head = newNode;
        } else {
            ListNode *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        ++size;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return; // Index is invalid
        }
        if (index == 0) {
            addAtHead(val);
        } else if (index == size) {
            addAtTail(val);
        } else {
            ListNode *newNode = new ListNode(val);
            ListNode *current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            ++size;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return; // Index is invalid
        }
        if (index == 0) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        } else {
            ListNode *current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            ListNode *temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        --size;
    }
};

// Testing the MyLinkedList class
int main() {
    MyLinkedList *list = new MyLinkedList();
    list->addAtHead(1);          // Linked list becomes 1
    list->addAtTail(3);          // Linked list becomes 1 -> 3
    list->addAtIndex(1, 2);      // Linked list becomes 1 -> 2 -> 3
    cout << list->get(1) << endl; // Output: 2
    list->deleteAtIndex(1);      // Linked list becomes 1 -> 3
    cout << list->get(1) << endl; // Output: 3
    return 0;
}
