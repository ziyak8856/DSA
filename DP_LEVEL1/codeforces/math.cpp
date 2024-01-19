#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        vector<int>ls;
        ls.push_back(1);
        for(int i=1;i<n-1;i++){
          int x=abs(a[i]-a[i-1]);
          int y=abs(a[i]-a[i+1]);
          if(x>y){
            ls.push_back(1);
          }else{
            ls[i-1]=1;
            ls.push_back(abs(a[i]-a[i+1]));
          }

        }
        for(auto it :ls)cout<<it<<" ";
        cout<<"\n";
        vector<int>rs;
        rs.push_back(1);
        for(int i=n-2;i>=0;i--){
          int x=abs(a[i]-a[i-1]);
          int y=abs(a[i]-a[i+1]);
          if(x>y){
            
            
          }else{
            rs.push_back(1);
          }

        }
        for(auto it :rs)cout<<it<<" ";

    }

}