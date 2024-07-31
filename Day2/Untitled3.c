#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    switch(a){
        case a%2==0: cout<<a++; break;
        case a%2!=0: cout<<a;
    }
}
