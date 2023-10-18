#include<bits/stdc++.h>
using namespace std;
int occ(int a[],int i,int n,int ele){
    if(i<0){
        return -1;
    }
    if(a[i]==ele){
        return i;
    }
   return occ(a,i-1,n,ele);
    

}
int main(){
    int n=7;
    //find first occ index of 3
    //op=2
    int a[7]={1,2,3,4,5,2,3};
    cout<<occ(a,n-1,n,3);

    
}