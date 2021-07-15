#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int a,b,mi,mx;
    cin>>a>>b;
    mi=a<b?a:b;
    mx=a>b?a:b;

    if(2*mi<mx){
        cout<<mx*mx<<endl;
    }else{
      cout<<2*mi*2*mi<<endl;
    }
 }

}
