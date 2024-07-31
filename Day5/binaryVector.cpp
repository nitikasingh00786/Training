#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;//It should be in sorted order for binary Search
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int key;
    cout<<"Enter Key to Search"<<endl;
    cin>>key;

    int s=0;
    int l=n-1;
    int mid=s+(l-s)/2;
    while(s<=l){
    if(arr[mid]==key){
        cout<<mid;
    }
    if(key>arr[mid]){
        s=mid+1;
    }
    else{
        l=mid-1;
    }
    mid=s+(l-s)/2;
    }
}
