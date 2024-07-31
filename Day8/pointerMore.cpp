#include<iostream>
using namespace std;
int main() {
    int i=10;
    int *j=&i;
    cout<<*j<<endl;
    cout<<&j<<endl;
    cout<<*(&i)<<endl;
// '*' can be used with variable,expression,Constant.2
}

