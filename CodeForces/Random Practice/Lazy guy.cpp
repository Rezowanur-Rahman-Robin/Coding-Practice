

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];
  vector<int> vec;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  sort(arr,arr+n);

  for(int i=n-1;i>=0;i--){
    while(k>=arr[i]){
        k-=arr[i];
        vec.push_back(arr[i]);
    }
  }
  cout<<vec.size()<<endl;

}
