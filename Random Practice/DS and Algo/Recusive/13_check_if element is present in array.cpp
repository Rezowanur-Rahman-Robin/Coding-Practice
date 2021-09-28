#include<bits/stdc++.h>
using namespace std;

bool checkPresent(int arr[] , int n, int x){
  if(n==0){
    return false;
  }

  if(arr[0]==x){
    return true;
  }

  return checkPresent(arr+1, n-1, x);
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int x;
cin>>x;

if(checkPresent(arr,n,x)){
  cout<<"YES"<<endl;
}else{
 cout<<"NO"<<endl;
}
}
