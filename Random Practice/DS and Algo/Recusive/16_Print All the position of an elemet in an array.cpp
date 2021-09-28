#include<bits/stdc++.h>
using namespace std;

void checkPresent(int arr[] , int n, int x,int i){
  if(i==n){
    return;
  }

  if(arr[i]==x){
    cout<<"Found at position: "<<i<<endl;
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

checkPresent(arr,n,x,0);


}

