#include<bits/stdc++.h>
using namespace std;
int mi=INT_MAX;
void callrec(vector<vector<int>>g,int n,int m,int i,int j,int cost){
      if(i>=n||j>=m){
        return ;
      }
       cost+=g[i][j];
      if(i==n-1&&j==m-1){
        mi=min(cost,mi);
        return;
      }
      
      callrec(g,n,m,i,j+1,cost);
      callrec(g,n,m,i+1,j,cost);

       
}


int main(){
    vector<vector<int>>grid = {{1,2,3},{4,5,6}};
   // cout<<minPathSum(grid);
   int n=grid.size();
      int m=grid[0].size();
     
   callrec(grid,n,m,0,0,0);
   cout<<mi;
   cout<<"\n";
   cout<<"tanulation:\n";
   for(int j=m-2;j>=0;j--){
        grid[n-1][j]=grid[n-1][j]+grid[n-1][j+1];
      }
      for(int i=n-2;i>=0;i--){
        grid[i][m-1]=grid[i][m-1]+grid[i+1][m-1];
      }
      for(int i=n-2;i>=0;i--){
        for(int j=m-2;j>=0;j--){
          grid[i][j]+=min(grid[i+1][j],grid[i][j+1]);
        }
      }
      cout<<grid[0][0];

}