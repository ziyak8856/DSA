#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&dp){
    if(n==0||n==1)return n;
    if(dp[n]!=0)return dp[n];
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int >dp(n+1,0);
    
    cout<<fib(n,dp);
}