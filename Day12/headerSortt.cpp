#include <iostream>
#include <vector>
#include <algorithm>
#include "headerSort.h"
using namespace std;
int main() {
    vector<int> arr;
    int n,a;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int z;
    for (int i=0;i<20;i++){
    cout<<"\nWhat you want to do from the following: "<<endl;
    cout<<"\n1. Bubble Sort"<<endl;
    cout<<"2. Selection Sort"<<endl;
    cout<<"3. Insertion Sort"<<endl;
    cout<<"4. Merge Sort"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: \n";
    cin>>z;
    if (z==1){
    BubbleSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (z==2){
    SelectionSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (z==3){
    InsertionSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (z==4){
    MergeSort(arr);
    for (int num:arr){
        cout<<num<<" ";
    }
    }
    if (z==5){
        cout<<"Exiting the program!"<<endl;
        break;
    }
    if (z>5||z<1){
        cout<<"Invalid choice enter from 1-5!"<<endl;
    }
    }
    return 0;
}
