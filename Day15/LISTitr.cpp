#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> num={1,2,3,4,5};
    list<int> ::iterator itr = num.begin();
    ++itr;
    cout<<"Second element : "<<*itr<<endl;
    ++itr;
    ++itr;
    cout<<"Fourth Element : "<<*itr;
    return 0;
    }
