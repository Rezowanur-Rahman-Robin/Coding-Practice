#include<bits/stdc++.h>
using namespace std;

int sumofArray(int arr[],int n){

    if(n==0 ){
        return 0;
    }

    return sumofArray(arr+1,n-1) + arr[0];  ///arr + 1 denotes that the new array will start from the a[o]+1 address that means from a[1]

}
///another way
int sumofArray2(int arr[],int n,int i){

    if(i==n ){
        return 0;
    }

    return sumofArray2(arr,n,i+1) + arr[i];

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
                cin>>arr[i];

    cout<<sumofArray(arr,n)<<endl;

     cout<<sumofArray2(arr,n,0)<<endl;

return 0;
}

