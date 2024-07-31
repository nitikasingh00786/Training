#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    vector<int> v1;
    cout<<"Enter Length : ";
    int n;
    cin>>n;
    cout<<"Enter Values : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int sum1=0,sum2=0;
        for(int j=0;j<=i;j++){
            sum1+=v[j];
        }
        for(int j=i+1;j<n;j++){
            sum2+=v[j];
        }
        int max1=max(sum1,sum2);
        v1.push_back(max1);
        cout<<max1<<" ";
    }
    cout<<endl;
    int min1=v1[0];
    for(int i=1;i<v1.size();i++){
        if(min1>v1[i]){
            min1=v1[i];
        }
    }
    cout<<min1;
}
