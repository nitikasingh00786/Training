#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    l.push_back(12);
    l.push_front(41);
    for(int i:l){
    cout<<i<<" ";
    }

    cout<<"After reverse"<<endl;
    l.reverse();
    for(int i:l){
    cout<<i<<" "<<endl;
    }
    cout<<"Unique"<<endl;
    l.unique();
    for(int i:l){
    cout<<i<<" "<<endl;
    }
    cout<<"resize"<<endl;
    l.resize(5);
    for(int i:l){
    cout<<i<<" "<<endl;
    }
}
