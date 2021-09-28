#include<bits/stdc++.h>
using namespace std;

vector<int> checkPresent(int arr[] , int n, int x,int i, vector<int> vec){
  if(i==n){
    return vec;
  }

  if(arr[i]==x){
    vec.push_back(i);
  }

  return checkPresent(arr, n, x , i+1,vec);
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

vector<int>emptyVector;
vector<int> foundIndex = checkPresent(arr,n,x,0,emptyVector);

if(foundIndex.size()!=0){
    for(int i=0; i<foundIndex.size();i++){
    cout<<x<<" is found at index "<<foundIndex[i]<<endl;
}
}else{
    cout<<"Not Found.";
}

}


