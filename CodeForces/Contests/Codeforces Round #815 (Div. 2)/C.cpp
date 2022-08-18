#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    sort(arr,arr+n);
    long long maxSum =arr[n-1] + arr[n-2] -arr[0]-arr[1];
    cout<<maxSum<<endl;
}


return 0;
}

