#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n==0)return 1;
    if(n==1)return x;
    int t=x*power(x,n-1);
    return t;
}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<power(x,n);
}