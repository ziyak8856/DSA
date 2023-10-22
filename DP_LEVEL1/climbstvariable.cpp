#include<bits/stdc++.h>
using namespace std;
int callrec(int a[],int index,int n){
    if(n==index){
        return 1;
    }
    // if(index>=n){
    //   return  0;
    // }
   int c=0;
    for(int j=1;j<=a[index];j++){
         if(j+index<=n){
            c+=callrec(a,j+index,n);
         }
    }
    return c;
}
int calltab(int n,int a[]){
    int tab[n+1]={0};
    tab[n]=1;
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=a[i];j++){
            if(j+i<=n){
              tab[i]=tab[i]+tab[i+j];
            }
        }
    }
    return tab[0];
}

int main(){
    int n=6;
   // cin>>n;
    int a[]={2, 3, 0, 1, 2, 3};
    // for(int i=0;i<n;i++){
    //     cin>>a[i];

    // }
    cout<<"using rec:";
    cout<<callrec(a,0,n);
    cout<<"\nusing dp:";
    cout<<calltab(n,a);

    
}