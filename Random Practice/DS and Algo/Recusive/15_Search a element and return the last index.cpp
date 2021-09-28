#include<bits/stdc++.h>
using namespace std;

int checkPresent(int arr[] , int i, int x){
  if(i==-1){
    return -1;
  }

  if(arr[i]==x){
    return i;
  }

  return checkPresent(arr, i-1, x  );
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

int targetIndex = checkPresent(arr,n-1,x);

if(-1 != targetIndex){
  cout<<"First Index: "<<targetIndex<<endl;
}else{
 cout<<"Not Found."<<endl;
}
}
