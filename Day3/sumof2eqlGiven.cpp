#include<iostream>
using namespace std;
int main(){
    int a[5]={1,4,2,3,8};
    int value=5;
    int count=0;
    //pick the 1st element of the pair
    for(int i=0;i<5;i++){
    //pick the 2nd element of the pair along with a[i]
    for(int j=i+1;j<5;j++){
    if(a[i]+a[j]==value){
    count++;
    }
    }
    }
    cout<<"the count of pairs "<<value<<" is "<<count<<endl;
    }
