#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> num={1,2,3,4,5};
    cout<<"Given List : ";
    for(int i:num){
        cout<<i<<" ";
    }
    list<int>::iterator itr = num.begin();
    for(int i=0;i<3;i++){
        ++itr;
    }
    num.remove(*itr);
    //num.remove(1);

    cout<<endl<<"FInal List : ";
    for(int i: num){
        cout<<i<<", ";
    }
}
