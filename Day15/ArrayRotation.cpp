#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={1,2,3,4,5};
    int len=l.size();
    cout<<"Before rotation : "<<endl;
    for(int i:l){
            cout<<i<<" ";
        }
        cout<<endl;
    cout<<"After Rotation : "<<endl;
    for(int i=0;i<2;i++){
        int temp=l.back();
        for(int j=len-1;j>0;j--){
            swap()
            //v[j]=v[j-1];
        }
        l.front()=temp;

        cout<<"Step"<<i+1<<" : ";
        for(int i:l){
            cout<<i<<" ";
        }
        cout<<endl;
    }}

