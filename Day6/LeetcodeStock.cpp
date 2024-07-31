#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices={7,1,5,3,6,4};
    /*int min=prices[0];
    int sum=0;
    for(int i=1;i<prices.size();i++){
        if(sum<(prices[i]-min)){
            sum=prices[i]-min;
        }
        if(prices[i]<min){
            min=prices[i];
        }
    }
    cout<<sum;
}*/
    int minSoFar=prices[0];
    int ans=0;
    for(int i=1;i<prices.size();i++){
        int profit = prices[i]-minSoFar;
        if(profit>ans){
            ans=profit;
        }
        minSoFar=min(prices[i],minSoFar);
    }
    cout<<ans;
    }
