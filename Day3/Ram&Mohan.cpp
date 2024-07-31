#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((i+j)==m&&(i*j)==n){
                cout<<i<<" "<<j;
            }
        }
    }
}
