#include<iostream>
using namespace std;

int SumOf2(int a,int b){
    int sum2=a+b;
    return sum2;
}
int SumOf3(int a,int b,int c){
    int sum3=a+b+c;
    return sum3;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x=SumOf2(a,b);
    cout<<"Sum of a and b is : "<<x<<endl;
    int y=SumOf3(a,b,c);
    cout<<"Sum of a,b and c is : "<<y;
}
