#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> num={1,2,3,4,5};
    if(num.empty()){
    cout<<"List is empty"<<endl;
    cout<<"enter element to add : ";
        int x;
        cin>>x;
        num.push_front(x);
    }
}
