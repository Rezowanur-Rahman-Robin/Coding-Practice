#include<bits/stdc++.h>
using namespace std;

int linear_Search(int array_ID[],int id,int arraySize){
    bool isFound= false;
    int i;
 for( i=0;i<arraySize;i++){
    if(array_ID[i]==id){
        isFound=true;
        break;
    }
 }
 if(isFound){
    return i+1;
 }else{
     return 0;
  }
}

int main(){
 int n,i;
 cout<<"Enter the array size:"<<endl;
 cin>>n;
 int arr[n];
  int searchId;
  for(i=0;i<n;i++){
    cout<<"Enter the element no "<<i+1<<":";
    cin>>arr[i];
    cout<<endl;
 }
 cout<<"Enter the Id that your want to find out from the given array:"<<endl;
 cin>>searchId;
 int temp=linear_Search(arr,searchId,n);
 if(temp != 0){
        cout<<"Your id is found in position: "<<temp<<endl;

 }else{
      cout<<"Your id is not Found in your given Array"<<endl;
  }
}
