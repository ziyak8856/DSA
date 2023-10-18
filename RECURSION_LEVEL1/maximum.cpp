#include<bits/stdc++.h>
using namespace std;
int print(int a[],int i,int n){
    if(i>=n){
        return INT_MIN;
    }
    int maxtilli=print(a,i+1,n);
    if(maxtilli>a[i]){
        return maxtilli;
    }
    return a[i];

}
int main(){
    int n=5;
    int a[5]={1,2,3,4,5};
    cout<<print(a,0,n);
}