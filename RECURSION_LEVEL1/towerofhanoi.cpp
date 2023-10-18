#include<bits/stdc++.h>
using namespace std;
long long c=0;
long long toh(int n,int s,int d,int h){
    if(n>0){
        //n-1 disk beech me rakhe end ki help se
        toh(n-1,s,h,d);
        
        c++;
        //ab 1 jo hai badi waaali usko end me dall diye
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<"\n";
        //jo aux me the unko end me daale start ki help se
        toh(n-1,h,d,s);
    }
    return c;
}
int main(){
    
    cout<<toh(2,1,3,2);
}