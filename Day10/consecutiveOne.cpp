#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v={1,0,1,1,0,1,1,1};
    int max=0;
    int c=0;
    for(int i:v){
        if(i==1){
            c++;
            if(c>max){
                max=c;
            }
        }
        else{
            c=0;
        }
    }
    cout<<"1 is repeated "<<max<<" times.";
}
