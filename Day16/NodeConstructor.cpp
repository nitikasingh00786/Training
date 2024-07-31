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

int main() {
    Node* n1=new Node(10);
    cout<<"Val : "<<n1->value<<"\n"<<"Add : "<<n1->next<<endl;
    return 0;
}
