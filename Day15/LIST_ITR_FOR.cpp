#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> num={1,2,3,4,5};
    list<int> ::iterator itr = num.begin();
    for(int j=0;j<2;j++){
        int index;
        cin>>index;
        for(int i=0;i<index;i++){
            itr++;
        }
        cout<<*itr;
        }
}
