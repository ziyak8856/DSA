#include<bits/stdc++.h>
using namespace std;
 int maxi=INT_MIN;
    void call(int i,int j,vector<vector<int>>a,int n,int cost){
        if(i==n){
            maxi=max(maxi,cost);
            return ;
        }
        for(int k=0;k<3;k++){
            if(k!=j){
                call(i+1,k,a,n,cost+a[i][j]);
            }
        }
    }
int main(){
    int n=3;
    
vector<vector<int>>a{{1, 2, 5},{3,1,1},{3,3,3}};
  for(int i=0;i<3;i++){
            call(0,i,a,n,0);
        }
    cout<<maxi;
}