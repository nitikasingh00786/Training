#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,7>arr={1,2,3,4,5,5,3};
    array<int,5>visited;
    for(int i=0;i<arr.size();i++){
        if(visited[arr[i]]!=1){
            int count=1;
            visited[arr[i]]=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]==arr[i]){
                    count++;
                }
            }
            cout<<arr[i]<<":"<<count<<endl;
        }
    }
}
