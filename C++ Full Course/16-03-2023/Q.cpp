#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==0){
        cout<<n<<endl;
        continue;
    }
    while(n>0){
        int digit = n % 10;
        n = n/10;

        cout<<digit<<" ";
    }
    cout<<endl;
}


return 0;
}
