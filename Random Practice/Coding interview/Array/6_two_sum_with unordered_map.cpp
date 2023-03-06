#include<bits/stdc++.h>
using namespace std;
int* findSum(int arr[], int value, int size) {
  // Write your code here
 unordered_map<int,int> mp;
 for(int i=0;i<size;i++){
    mp.insert(make_pair(arr[i],abs(value-arr[i])));
 }

 for(auto it:mp){
    if(mp[it.second]){
        cout<<it.first<<" "<<it.second<<endl;
    }
 }

  return arr;
}
int main(){
int a[]={1,21,3,14,5,60,7,6};
int* ptr;
ptr = findSum(a,81,8);
}
