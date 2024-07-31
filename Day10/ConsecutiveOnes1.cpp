#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,0,1,1,0,1,1,1};
  int sum=0,mSum=0;
  for(int i=0;i<nums.size();i++)
  {
   if(nums[i]==0)
   {
    sum=0;
   }
   else{
    sum+=1;
    if(sum>mSum)
     mSum=sum;
   }
  }
  cout<<mSum;
 }
