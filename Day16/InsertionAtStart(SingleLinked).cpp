#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next; //Node pointing to next node
        Node(int data){
            value=data;
            next=NULL;
        }
};
void insertAtHead(Node* &head,int value){
    Node* new_node=new Node(value);
    head=new_node;
    new_node->next=head;
        }

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void displayEvenOdd(Node* head){
    Node* temp=head;
    cout<<"Even : ";
    while(temp!=NULL){
        if(temp->value%2==0){
            cout<<temp->value<<" ";
        }
        temp=temp->next;
    }
    cout<<endl;
    temp=head;
    cout<<"Odd : ";
    while(temp != NULL){
        if(temp->value%2!=0){
            cout<<temp->value<<" ";
        }
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    //Node* n1=new Node(10);
    //cout<<"Val : "<<n1->value<<"\n"<<"Add : "<<n1->next<<endl;
    //Create an empty node
    Node* head = NULL;
    insertAtHead(head,10);
    //display(head)
    insertAtHead(head,20);
    display(head);

    displayEvenOdd(head);

    return 0;
}
