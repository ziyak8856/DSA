#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    n=5,k=4;
    int dp[k+1][n+1]={0};
    if(n==0||k==0||n<k)cout<<"np zero ways";
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i==1){
               dp[i][j]=1;
            }else{
                dp[i][j]=i*dp[i][j-1]+dp[i-1][j-1];
            }
        }
    }
    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
           cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
}