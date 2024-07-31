#include<iostream>
#include "myheader1.h"
using namespace std;
int add(int x,int y);
int sub(int x,int y);
int main() {
    cout<<"add function "<<add(101,20)<<endl;
    cout<<"subtraction "<<sub(10,20)<<endl;
    return 0;
}
