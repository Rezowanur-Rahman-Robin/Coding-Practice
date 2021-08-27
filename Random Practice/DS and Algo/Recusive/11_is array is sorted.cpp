#include<bits/stdc++.h>
using namespace std;

bool ifarraySorted(int arr[],int n){

    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1])
        return false;

    return ifarraySorted(arr+1,n-1);  ///arr + 1 denotes that the new array will start from the a[o]+1 address that means from a[1]

}

///another way
bool ifarraySorted2(int arr[],int n){

    if(n==0 || n==1){
        return true;
    }

    if(arr[n-2]>arr[n-1])
        return false;

    return ifarraySorted(arr,n-1);

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
                cin>>arr[i];

    if(ifarraySorted(arr,n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

     if(ifarraySorted2(arr,n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
return 0;
}
