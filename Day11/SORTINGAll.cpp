#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubblesort(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
}}}}

void selection(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        int minInd=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minInd]){
                swap(arr[j],arr[minInd]);
}}}}

void insertionSort(vector<int>& arr, int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                swap(arr[j+1],arr[j]);
            }
            else{
                break;
}}}}

int main() {
    vector<int> arr;
    int n;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Merge Sort\n5.Exit"<<endl;
    cout<<"Enter your choice : "<<endl;
    int choice;
    cin>>choice;
    while(1){
    switch(choice){
        case 1: {
            bubblesort(arr,n);
            cout<<"After Sorting"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        break;
        case 2:{
            selection(arr,n);
            cout<<"After Sorting"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        break;
        case 3:{
            insertionSort(arr,n);
            for(int num : arr){
                cout<<num<<" ";
            }
            return 0;
        }
        break;
        case 4:{
            stable_sort(arr.begin(),arr.end());
            for(int num:arr){
                cout<<num<<" ";
        }
        return 0;
        }
        break;
        case 5: exit(0);
        default: cout<<"Enter correct choice"<<endl;
    }
        cout<<"Do you still want to continue(Y/N) : "<<endl;
        char choice1;
        cin>>choice1;
        if(choice1=='Y'||choice1=='y'){
            continue;
        }
        else{
            break;
        }
        }
    }
