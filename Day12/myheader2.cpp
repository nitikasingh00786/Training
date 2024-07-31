#include<iostream>
#include "myheaderr2.h" //creating ur own headerfile
using namespace std;
void Demo::input(){
cout<<"Enter \n";
cin>>a>>b;
}
void Demo::show(){
cout<<"\n"<<a<<" " <<b;}
int main(){
    Demo obj;
obj.input();
obj.show();
return 0;}
