#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<n;i++){
        int temp=v[i];
        for(int j=i-1;j>=0;j--){
            if(v[j]>temp){
                swap(v[j+1],v[j]);
            }
            else{
                break;
            }
        }
    }
    for(int i:v){
        cout<<i<<" ";
    }

}
