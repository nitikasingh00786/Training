#include<iostream>
using namespace std;

int add(int x,int y){
    int ans=x+y;
    return ans;
    }
int sub(int x,int y){
    int ans=x-y;
    return ans;
    }
int mul(int x,int y){
    int ans=x*y;
    return ans;
    }
float divi(int x,int y){
    float ans=x/y;
    return ans;
    }


main(){
    int a,b;
    cin>>a>>b;
    int u=add(a,b);
    cout<<"Sum = "<<u<<endl;
    int v=sub(a,b);
    cout<<"Sub = "<<v<<endl;
    int w=mul(a,b);
    cout<<"Mul = "<<w<<endl;
    float x=divi(a,b);
    cout<<"Div = "<<x<<endl;
    return 0;
}
