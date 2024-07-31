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
	Node* new_node=new Node(value);//Creating new node
	 new_node->next=head;
	 head=new_node;
}
void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->value<<"->";
		temp=temp->next;
	}
	cout<<"Null"<<endl;
}
int main(){
    //want my initial list is 20,3,,40 then call insertAtHead(head,10)
    //Display the list

	Node* n1=new Node(30);
	cout<<"Value : "<<n1->value<<" "<<"Address : "<<n1->next<<endl;

	//Create empty node
	Node* head=NULL;
	insertAtHead(head,10);
	//display(head);
	insertAtHead(head,20);
	display(head);
}
