#include<bits/stdc++.h>
using namespace std;
int ma=INT_MIN;
void dfs(int i,int j,int n,int m,vector<vector<int>>&mat,int cost){
    if(i>=n||j>=m||i<0){
        return ;
    }
    cost+=mat[i][j];
    if(j==m-1){
        ma=max(ma,cost);
        return ;
    }
    dfs(i-1,j+1,n,m,mat,cost);
     dfs(i,j+1,n,m,mat,cost);
      dfs(i+1,j+1,n,m,mat,cost);

}
 int dfs(int i,int j,int n,int m,vector<vector<int>>&mat,vector<vector<int>>&dp){
    if(i>=n||j>=m||i<0){
        return 0;
    }
    if(dp[i][j]!=-1)return dp[i][j];

    int up=  dfs(i-1,j+1,n,m,mat,dp);
    int right= dfs(i,j+1,n,m,mat,dp);
    int down=  dfs(i+1,j+1,n,m,mat,dp);
    dp[i][j]=mat[i][j]+max(max(up,right),down);
    return dp[i][j];

}
int main()
{
    vector<vector<int>>mat = {{1, 3, 3},
                   {2, 1, 4},
                  {0, 6, 4}};
                   int n=3;
                   int m=3;
                   for(int i=0;i<n;i++){
                   dfs(i,0,n,m,mat,0);

                   }
                   cout<<ma;
                   ma=INT_MIN;
                   vector<vector<int>>dpm(n,vector<int>(m,-1));
                 //  int m=M[0].size();
                 
                   for(int i=0;i<n;i++){
                  ma=max(dfs(i,0,n,m,mat,dpm),ma);

                   }
                   cout<<ma;
                   cout<<"\ntabulation:";

                vector<vector<int>> dp(n,vector<int>(m,-1));
       for (int j = m - 1; j >= 0; j--) {                         //3
      for (int i = n - 1; i >= 0; i--) {                     //4

        if (j == m - 1) {
          dp[i][j] = mat[i][j];                          //5
        }
        else if (i == 0) {                                 //6
          dp[i][j] = mat[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
        }
        else if (i == n - 1) {                             //7
          dp[i][j] = mat[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);
        }
        else {                                             //8
          dp[i][j] = mat[i][j] + max(dp[i][j + 1],max(dp[i + 1][j + 1],
                                          dp [i - 1][j + 1]));
        }
      }

    }
    int max = dp[0][0];                                        //9
    for (int i = 1; i < n; i++) {
      if (dp[i][0] > max)                                //10
        max = dp[i][0];
    }
   cout<<max;

} // namespace std;
