class Solution {
public:
  vector<vector<int>>& mat) {
    int i=0,j=0;
    long long sum=0;
    while(j<mat[0].size())
    {
      sum+=mat[i][j];
      i++;
      j++;
    }
    i--;
    j=0;
    while(j<mat[0].size())
    {
      sum+=mat[i][j];
      i--;
      j++;
    }
    i=(mat.size()-1)/2;
    j=i;
    if((mat[0].size())%2==0)
    return sum;
    sum=sum-mat[i][j];
    return sum;
  }
};
---------------
class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int diagonalSum=0;
    int n=mat.size();
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i==j){
          diagonalSum+=mat[i][j];
        }
        else if(i==n-j-1){
          diagonalSum+=mat[i][j];
        }
      }
    }
    return diagonalSum;
  }
};
--------------
class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int sum=0;
    int temp=mat.size();
    for(int i=0;i<mat.size();i++){
      for(int j=0;j<mat.size();j++){
        if(temp%2==0){
          if(i==j){
            sum+=mat[i][j];
          }
          if(i+j==temp-1){
            sum+=mat[i][j];
          }
        }
        else{
          if(i+j==temp-1){
            sum+=mat[i][j];
          }
          if(i==j && i!=temp/2){
            sum+=mat[i][j];
          }
        }
      }
    }
    return sum;
  }
};
