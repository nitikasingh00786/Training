#include <iostream>
using namespace std;

struct Node {
    int data;  // Binary digit (0 or 1)
    Node *next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Function to convert binary number in a linked list to an integer
int binaryToInteger(int n, Node *head) {
    int val = 0;
    
    // Iterate through the linked list and compute the integer value
    for (int pos = n - 1; pos >= 0; pos--, head = head->next) {
        val |= head->data << pos;
    }
    
    return val;
}

int main() {
    // Create a linked list representing the binary number 1011
    // List: 1 -> 0 -> 1 -> 1
    Node *head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(1);
    head->next->next->next = new Node(1);
    
    int n = 4;  // Length of the binary number in the linked list
    
    // Convert binary to integer
    int result = binaryToInteger(n, head);
    
    // Output the result
    cout << "The integer value of the binary number is: " << result << endl;
    
    // Clean up allocated memory
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        delete current;
        current = next;
    }
    
    return 0;
}
