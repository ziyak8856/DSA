#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=-1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(j>=nums[i-1]){
                    if(dp[i-1][j]!=0||dp[i-1][j-nums[i-1]]!=0)
                    dp[i][j]=1+max(dp[i-1][j],dp[i-1][j-nums[i-1]]);
                    
                }
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=target;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        return dp[n][target];
    }
int main(){
    vector<int>nums{1,2,3,4,5};
    int t=9;
    cout<<lengthOfLongestSubsequence(nums,t);
}