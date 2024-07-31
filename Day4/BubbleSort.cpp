#include<iostream>
using namespace std;
void bubblesort(int arr1[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    bubblesort(arr,n);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
