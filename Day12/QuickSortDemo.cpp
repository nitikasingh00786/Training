#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int i,j,p;
    vector<int> arr={5,6,4,8,5,3,9};
    sort(arr.begin(),arr.end(),greater<int>());
    cout<<"Sorted Array : "<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
