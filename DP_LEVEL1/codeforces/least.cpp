#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int pos=0;
    int f=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0)pos++;
        if(a[i]==0)f=1;
    }
    if(pos==n||f==1)cout<<0<<"\n";
    else if(pos%2==0){
      cout<<0<<"\n";
    }


    }
}