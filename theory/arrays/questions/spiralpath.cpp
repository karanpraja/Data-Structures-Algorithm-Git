#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
   // Write your code here.
   vector<int>ans;
    int startingrow=0;//this code is applicable for any kind of spiral matrix because in this code we have the cdn count which until unsatisfied will keep upon running untill it satisfied the cd/
    int startingcol=0;
    int endingrow=n-1;
    int endingcol=m-1;
    int count=0;
    int total=m*n;
    while(count<total)
    {
      for(int i=startingcol;i<=endingcol&& count < total;i++)
      {
        ans.push_back(matrix[startingrow][i]);
        count++;
      }
      startingrow++;
      for(int i=startingrow;i<=endingrow&& count < total;i++)
      {
       ans.push_back(matrix[i][endingcol]);
        count++;
      }
      endingcol--;
      for(int i=endingcol;i>=startingcol&& count < total;i--)
      {
        ans.push_back(matrix[endingrow][i]);
        count++;
      }
      endingrow--;
      for(int i=endingrow;i>=startingrow&& count < total;i--)
      {
       ans.push_back(matrix[i][startingcol]);
        count++;
      }
      startingcol++;//if the matrix is big then there will be reiteration and it will print the remaining elements
      //in reiteration it will consder the smaller matrix inside the outer bigger matrix and it will print the elements
      
    }
    return ans;
}