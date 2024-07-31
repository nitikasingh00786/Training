#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>
    int choice;
    cout<<"Enter Your Choice : ";
    cin>>choice;
    switch(choice){
        case 1: {int a,b; cout<<"Enter value of a and b(a+b) : ";cin>>a>>b; int x=a+b;  break;}

        case 2: {int a,b; cout<<"Enter value of a and b(a-b) : ";cin>>a>>b; int x=a-b; cout<<x; break;}

        case 3: {int a,b; cout<<"Enter value of a and b(a*b) : ";cin>>a>>b; int x=a*b; cout<<x; break;}

        case 4: {int a,b; cout<<"Enter value of a and b(a/b) : ";cin>>a>>b; int x=a/b; cout<<x; break;}

        case 5: exit(0);

        default: cout<<"Enter correct choice"<<endl; break;
    }
}
