#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* prev;

    // Constructor for creating a node with value, next, and prev
    Node(const string& val, Node* next1 = nullptr, Node* prev1 = nullptr) 
        : data(val), next(next1), prev(prev1) {}
};

class Browser {
public:
    Node* current;

    // Constructor initializes the browser with the homepage
    Browser(const string& homepage) {
        current = new Node(homepage);
    }

    // Visit a new URL and move to it
    void visit(const string& url) {
        Node* newNode = new Node(url);
        current->next = newNode; 
        newNode->prev = current;
        current = newNode;
    }

    // Move back in the history by `steps` and return the URL of the new current page
    string back(int steps) {
        while (steps > 0 && current->prev != nullptr) {
            current = current->prev;
            steps--;
        }
        return current->data;
    }

    // Move forward in the history by `steps` and return the URL of the new current page
    string forward(int steps) {
        while (steps > 0 && current->next != nullptr) {
            current = current->next;
            steps--;
        }
        return current->data;
    }

    // Destructor to clean up memory
    ~Browser() {
        while (current != nullptr) {
            Node* temp = current;
            current = current->prev;
            delete temp;
        }
    }
};

int main() {
    string homepage = "homepage.com";
    Browser browser(homepage);

    cout << "Current Page: " << browser.back(0) << endl; // Should print homepage

    string url1 = "page1.com";
    browser.visit(url1);
    cout << "Current Page: " << browser.back(1) << endl; // Should print homepage
    cout << "Current Page: " << browser.forward(1) << endl; // Should print page1.com

    string url2 = "page2.com";
    browser.visit(url2);
    cout << "Current Page: " << browser.back(1) << endl; // Should print page1.com
    cout << "Current Page: " << browser.forward(1) << endl; // Should print page2.com

    return 0;
}
