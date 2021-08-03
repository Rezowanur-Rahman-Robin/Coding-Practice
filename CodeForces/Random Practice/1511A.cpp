#include<bits/stdc++.h>

using namespace std;

int main() { int n, arr[1001], min=10000, a=0, max=0,b=0; int c=0; cin>>n;

for (int i = 0; i < n; ++i) {
    cin>>arr[i];

    if (max<arr[i]){
        max=arr[i];
        a+=1;
    }
    if(min>arr[i]){
        min=arr[i];
        b+=1;
    }
}
c=a+b-2;

if(a+b==n && max!=min){
    cout<<(n-1)<<endl;
}
else{
    if(c<0 ){
        cout<<"0"<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
cout<<a<<" "<<b<<endl;
return 0; }
