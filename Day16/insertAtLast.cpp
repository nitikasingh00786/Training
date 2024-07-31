#include<iostream>
using namespace std;
class Node{
	public:
		int value;
		 Node* next;//node pointing to next node/element
		 Node(int data){
		 	value=data;
		 	next=NULL;
		 }
};
void insertAtHead(Node* &head,int value){
	Node* new_node=new Node(value);
	 new_node->next=head;
	 head=new_node;
}
void insertAtLast(Node* &head,int value){
	Node* new_node=new Node(value);
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	//when temp reached at last node
	temp->next=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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
    return 0;
}
