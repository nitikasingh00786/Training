#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> num={1,2,3,4,5};
    list<int> num1={6,7,8,9,10};
    cout<<"Given List : ";
    for(int i:num){
        cout<<i<<" ";
    }
    while(1){

    cout<<"\n1.reverse\n2.sort\n3.Unique\n4.empty\n5.size\n6.clear\n7.merge\n";
    cout<<"ENTER    YOUR    CHOICE : ";
    int ch;
    cin>>ch;
    switch(ch){
        case 1 : num.reverse();
                 for(int i: num){
                    cout<<i<<" ";
                    }
                 break;

        case 2 : num.sort();
                 for(int i: num){
                    cout<<i<<" ";
                    }
                 break;

        case 3 : num.unique();
                 for(int i: num){
                    cout<<i<<" ";
                    }
                 break;

        case 4 : if(num.empty()){
                    cout<<"List is EMPTY\n";
                 }
                 else{
                    cout<<"List is NOT EMPTY\n";
                 }
                break;

        case 5 : cout<<"SIZE of List is : "<<num.size(); break;

        case 6 : num.clear();
                 for(int i: num){
                    cout<<i<<" ";
                    }
                 break;

        case 7 : num.merge(num1);
                 for(int i: num){
                    cout<<i<<" ";
                    }
                 break;

        case 8 : exit(0);

        }
        cout<<"\nDo you want to continue (Y/n) : ";
        char again;
        cin>>again;
        if(again=='Y'||again=='y'){
            continue;
        }
        else{
            break;
        }
    }
}
