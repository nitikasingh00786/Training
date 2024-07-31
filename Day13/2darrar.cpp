//2 d array demo
#include<bits/stdc++.h>
using namespace std;
int main(){
//declaration of array
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//accessing elements
    for(int i=0;i<3;i++){
        for(int j = 0; j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
