#include<bits/stdc++.h>
using namespace std;
void print(int a[],int i,int n){
    if(i>=n){
        return ;
    }
    
    print(a,i+1,n);
    cout<<a[i];

}
int main(){
    int n=5;
    int a[5]={1,2,3,4,5};
    print(a,0,n);
}