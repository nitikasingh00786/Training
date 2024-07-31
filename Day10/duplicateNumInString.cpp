#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
            int count=1;
        for(int j=i+1;j<s.length();j++){
            if(isdigit(s[i])){
                if(s[i]==s[j]){
                    count++;
                    s[j]='a';
                }
            }
            else{
                break;
            }
        }
        if(count>1){
            cout<<s[i]<<" comes "<<count<<" times"<<endl;
    }
}
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int arr[10]={0};
    cout<<"Enter the String:";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char ch=s.at(i);
        if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
            if(arr[ch]==1){
                cout<<ch<<" ";
        }
            else{
                arr[ch]++;
        }
    }
    }
}*/
