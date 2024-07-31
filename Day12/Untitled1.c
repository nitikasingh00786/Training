//SOL1 :
class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int total=0;
    int sum=0;
    for(int i=0;i<accounts.size();i++){
sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
        total=max(total,sum);
      sum=0;
    }
    return total;
  }

//SOL 2:
  class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int max=0;
    int sum=0;
    for(int i=0;i<accounts.size();i++){
      sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
      if(sum>max){
        max=sum;
      }
      sum=0;
    }
    return max;
  }
};


////SOL 3:
class Solution {

public:
 int maximumWealth(vector<vector<int>>& accounts) {
  int max=0;
  int sum=0;
  for(int i=0;i<accounts.size();i++){
   for(int j=0;j<accounts[0].size();j++){
    sum+=accounts[i][j];
   }
   if(sum>max){
    max=sum;
   }
   sum=0;
  }
  return max;
 }
};

//SOL 4:
class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int max = 0;
  for(int i = 0 ; i<accounts.size(); i++)
  { int sum = 0;
    for(int j = 0 ; j<accounts[0].size(); j++)
    {
    sum = sum + accounts[i][j];
