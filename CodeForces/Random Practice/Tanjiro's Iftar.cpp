#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int arr[n];
  int isFound=false;
  for(int i=0;i<n;i++){
    cin>>arr[i];

    if(arr[i]==m){
        isFound=true;
    }
  }
  if(isFound){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
