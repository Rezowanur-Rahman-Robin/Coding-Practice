#include <bits/stdc++.h>
using namespace std;

int* findSum(int arr[], int value, int size) {
  // Write your code here
 int left = 0;
 int right = size-1;
  sort(arr,arr+size);

 while(left<right){
   int sum = arr[left]+arr[right];
   if(sum==value){
  cout<<arr[left]<<" "<<arr[right]<<endl;
  //arr[0]=arr[left];
  //arr[1]=arr[right];
  left++;
  right--;

   }else if(sum<value){

     left++;
   }else{

     right--;
   }
 }

  return arr;
}

int main(){


int a[]={1,21,3,14,5,60,7,6};
int* ptr;
ptr = findSum(a,81,8);
/*
for(int i=0;i<2;i++){
    cout<<ptr[i]<<endl;
}
*/
}
