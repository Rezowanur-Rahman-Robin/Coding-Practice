#include<bits/stdc++.h>
using namespace std;

int checkPresent(int arr[] , int n, int x,int i){
  if(i==n){
    return -1;
  }

  if(arr[i]==x){
    return i;
  }

  return checkPresent(arr, n, x , i+1 );
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

int targetIndex = checkPresent(arr,n,x,0);

if(-1 != targetIndex){
  cout<<"First Index: "<<targetIndex<<endl;
}else{
 cout<<"Not Found."<<endl;
}
}
