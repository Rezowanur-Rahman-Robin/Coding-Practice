#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long maxSum =arr[n-1] + arr[n-2] -arr[0]-arr[1];
    cout<<maxSum<<endl;
}


return 0;
}
