#include<iostream>
using namespace std;
int arr[20],n=0;
void insert();
void delete1();
void update();
void traverse();

int main(){
    int choice=0;
    cout<<"**********MENU**********"<<endl;
    cout<<"1.Insertion\n2.Deletion\n3.Update\n4.Traverse\n5.End\n";
    cout<<"************************";
    cout<<""<<endl;
    while(true){
        cout<<"Enter the Choice:";
        cin>>choice;
        switch(choice){
        case 1:
            insert();
            break;
        case 2:
            delete1();
            break;
        case 3:
            update();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid Choice"<<endl;
        }
    }

}

void insert(){
        int element;
        cout<<"Enter the Element:";
        cin>>element;
        arr[n++]=element;
        cout<<"Updated Array:";
        traverse();
        cout<<endl;
    }
    void delete1(){
        int index;
        cout<<"Enter the Index:";
        cin>>index;
        for(int i=index;i<n;i++){
            arr[i]=arr[i+1];

        }
        n--;
        cout<<"Updated Array:";
        traverse();
        cout<<endl;
    }
    void update(){
        int index,update;
        cout<<"Enter the Index:";
        cin>>index;
        cout<<"Enter the New Value:";
        cin>>update;
        arr[index]=update;
        cout<<"Updated Array:";
        traverse();
        cout<<endl;
    }
    void traverse(){
        cout<<"Array : "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
