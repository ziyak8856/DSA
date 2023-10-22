#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  vector<int>dp(n+1,INT_MAX);
    
    dp[n]=0;
    // for(auto it:dp){
    //     cout<<it<<" ";
    //  }
    //  cout<<"\n";
    
    for (int i = n - 1; i >= 0; i--) {
      if (a[i]!=0){
      int mi= INT_MAX;
      for (int j = 1; j <= a[i] && i + j < n+1; j++) {
        if (dp[i + j] != INT_MAX) {
          mi= min(mi, dp[i + j]);
        }
      }
      if (mi!= INT_MAX)
        dp[i] = mi + 1;
    }

    }
    // 
    cout<<dp[0];
}