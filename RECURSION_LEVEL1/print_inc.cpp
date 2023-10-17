#include<bits/stdc++.h>
using namespace std;
void call(int n){
    if(n==0)return ;
    
    call(n-1);
    cout<<n;
}
int main(){

    int n;
    cin>>n;
    call(n);
}