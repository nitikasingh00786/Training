#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    list<int> l;
    vector<int> v;
    cout<<"List : "<<endl;
    l.push_back(10);
    l.push_back(15);
    l.push_back(63);
    l.push_back(10);
    l.push_front(11);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl<<"Vector : "<<endl;
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    for(int i: v){
        cout<<i<<" ";
    }
}
