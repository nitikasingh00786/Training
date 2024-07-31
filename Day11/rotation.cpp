#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int len=v.size();
    cout<<"Before rotation : "<<endl;
    for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    cout<<"After Rotation : "<<endl;
    for(int i=0;i<len;i++){
        int temp=v[len-1];
        for(int j=len-1;j>0;j--){
            v[j]=v[j-1];
        }
        v[0]=temp;

        cout<<"Step"<<i+1<<" : ";
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }}

