#include<bits/stdc++.h>
using namespace std;
//jump 1,2,3
int callrec(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return  callrec(n-1)+callrec(n-2)+callrec(n-3);
}
int calldp(int n,int dp[]){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=0)return dp[n];

    return  dp[n]=calldp(n-1,dp)+calldp(n-2,dp)+calldp(n-3,dp);
}
//we know base case then we solve like the fibonacci
int calltab(int n){
    int tab[n+1]={0};
    tab[0]=1;
    for(int i=1;i<=n;i++){
        if(i==1){
            tab[i]=tab[i-1];
        }else if(i==2){
            tab[i]=tab[i-1]+tab[i-2];
        }else{
            tab[i]=tab[i-1]+tab[i-2]+tab[i-3];

        }
    }
    return tab[n];
}

int main(){
    int n;
    cin>>n;
    int dp[n+1]={0};
    
    cout<<"using rec:";
    cout<<callrec(n);
    cout<<"\nusing dp:";
    cout<<calldp(n,dp);
    cout<<"\nusing tab:";
    cout<<calltab(n);
    

}