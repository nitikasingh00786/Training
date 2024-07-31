#include<iostream>
#include<vector>
#include<numeric> //for accumulate
using namespace std;
int main() {
    vector<int> numbers={1,2,3,4,5};
    int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total,int n){
    return total+n;
    });
    cout<<"sum : "<<sum<<endl;
    return 0;
}
