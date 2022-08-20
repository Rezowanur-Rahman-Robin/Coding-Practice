
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int n,m;
    cin>>n>>m;
    int low,high;
    if(n<m){
        low = n;
        high = m;
    }else{
        high = n;
        low = m;
     }

     if(low == 1 && high ==1){
        cout<<0<<endl;
     }else if(low==1 || high == 1){
        cout<<high<<endl;
     }else{
        cout<<(low-1)*2+high<<endl;
     }
}


return 0;
}
