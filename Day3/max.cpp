#include<iostream>
using namespace std;
int main(){
    int array[]={10,20,30,40,50};
    int max=-32678;
    for(auto temp : array)
    {
        if(temp>max) // use if (temp<min) then min = temp with min = INT64_MAX initiall for minimum
        {
            max=temp;
        }
    }
    cout<<"Max Element is : "<<max;
}
