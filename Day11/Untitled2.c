#include<bits/stdc++.h>
using namespace std;
vector<int> v={1,2,3,4,5,6,7};
int reverse(int start,int end){
    int temp;
    while(start<end){
        temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int position;
    cout<<"Enter the No. of Position:";
    cin>>position;
    for(int i=0;i<v.size();i++){
        reverse(0,v.size()-1);
        reverse(position,v.size()-1);
        reverse(0,position-1);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
    }

}
