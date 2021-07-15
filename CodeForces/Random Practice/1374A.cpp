#include<bits/stdc++.h>
using namespace std;

int main(){

 long long x,y,n,cnt,ans,k,t;
 cin>>t;

 while(t--){
    cin>>x>>y>>n;

     cnt = n/x;
     ans= x*cnt+y;

     if(ans>n){
        ans-=x;
     }
     cout<<ans<<endl;

 }
}
