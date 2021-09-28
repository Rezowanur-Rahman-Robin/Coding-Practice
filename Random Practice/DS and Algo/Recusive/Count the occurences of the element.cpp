#include<bits/stdc++.h>
using namespace std;

int checkPresent(int arr[] , int n, int x,int i, int counter){
  if(i==n){
    return counter;
  }

  if(arr[i]==x){
    counter++;
  }

  return checkPresent(arr, n, x , i+1 ,counter );
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

int counter = checkPresent(arr,n,x,0,0);

if(counter != 0){
  cout<<counter<< " times found. "<<endl;
}else{
 cout<<"Not Found."<<endl;
}
}

