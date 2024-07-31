#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> v;
    for(int i=0;i<nums.size();i++){
        int product=1;
        for(int j=0;j<nums.size();j++){
            if(j==i){
                continue;
            }
            else{
            product=product*nums[j];
            }
        }
        v.push_back(product);
    }
    for(int i:v){
        cout<<i<<" ";
    }

     /*vector<int> v;
        int pro=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }
            else{
            pro*=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){

            }
            else{
                int x=pro/nums[i];
                v.push_back(x);
            }
            }
            for(int i: v){
            cout<<i<<" ";
        }*/

        }

        /*class Solution {
    public int[] productExceptSelf(int[] nums) {
        int suffix[]=new int[nums.length];
        int prefix[]=new int[nums.length];
        prefix[0]=nums[0];
        suffix[nums.length-1]=nums[nums.length-1];
        for(int i=1;i<nums.length;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        for(int i=nums.length-2;i>=0;i--){
            suffix[i]=nums[i]*suffix[i+1];
        }
        for(int i=0;i<nums.length;i++){
            if(i==0){
                nums[i]=suffix[i+1];

            }
            else if(i==nums.length-1){
                nums[i]=prefix[i-1];
            }
            else{
                nums[i]=prefix[i-1]*suffix[i+1];
            }
        }
        return nums;
    }
}
*/
