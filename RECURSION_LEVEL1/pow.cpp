#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n==0)return 1;
    if(n==1)return x;
    //x^n/2*x^n/2=x^n;
    int xpnb2=power(x,n/2);
    int xpn=xpnb2*xpnb2;
    if(n%2==1){
        return xpn*x;
    }
    return xpn;
    
}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<power(x,n);
}