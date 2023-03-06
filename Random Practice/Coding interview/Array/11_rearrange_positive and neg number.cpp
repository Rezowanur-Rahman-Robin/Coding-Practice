#include<bits/stdc++.h>
using namespace std;

int* reArrange(int arr[], int size) {
  // A swap function is prepended. Use it like swap(arg1,arg2)
  // Write your code here
  int j=0;
  for(int i=0;i<size;i++){
    if(arr[i]<0){
      if(i!=j){
        swap(arr[i],arr[j]);
        j++;
      }
    }
  }
  return arr;
}
int main(){
int a[]={-2,3,-9,2,-3,6};
int * ptr;
///O(n)
ptr = reArrange(a,6);
for(int i=0;i<6;i++){
    cout<<ptr[i]<<" ";
}

}
