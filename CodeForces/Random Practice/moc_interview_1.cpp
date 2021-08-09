/*
findPair with reduced complexity;

input array:4,2,6,78,2,5      10

output array:Ans:(4,6)

*/

#include<bits/stdc++.h>
using namespace std;

void findPair(int a[],int n,int length){
      sort(a,a+length);
int startPoint=0;
int endPoint=length-1;

bool found=false;

while(startPoint<endPoint){

 int sum= a[startPoint]+a[endPoint];



 if(sum>n){
    endPoint--;

 }else if(sum<n){

   startPoint++;
 }else{
   cout<<"Ans:("<<a[startPoint]<<","<<a[endPoint]<<")"<<endl;
   found=true;
      break;
 }
}

if(!found){
    cout<<"Not found."<<endl;
}

}

int main(){
    int arr[100]={4,2,6,78,2,5};

    int n;
    cin>>n;

    findPair(arr,n,6);

return 0;
}
