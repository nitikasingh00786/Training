#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Using Iterator : "<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Another way : "<<endl;

    cout<<"is present : "<<endl<<s.count(7)<<" "; //0 Because index not present

    set<int>::iterator itr=s.find(5);

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";//this is pointer
    } cout<<endl;
}
