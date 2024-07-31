#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size:";
    cin>>n;
    int arr[n][n];
    cout<<"Enter t.e Elements:";
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr[i])/sizeof(arr[i][0]);j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr[i])/sizeof(arr[i][0]);j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
