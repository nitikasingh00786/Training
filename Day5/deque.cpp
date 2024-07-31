#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int>d;    //deque means u can perform push and pop opr from both end.
    d.push_back(10);
    d.push_front(11);
    for(int i:d){
    cout<<i<<" ";
    }
    d.pop_back();
    for(int i:d){
    cout<<i<<" ";
    }
    d.pop_front();
    for(int i:d){
    cout<<i<<" ";
    }

    for(int i:d){
        cout<<i<<" ";
    }
    }
