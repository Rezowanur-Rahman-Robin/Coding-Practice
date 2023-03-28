#include<bits/stdc++.h>
using namespace std;
void printSecondMax(int arr[],int n){
    int maxx = arr[0];
    int secondMax = -999999;

    for(int i=0;i<n;i++){

        if(arr[i]>maxx){
            secondMax = maxx;
            maxx = arr[i];
        }else if(arr[i]>secondMax && arr[i]<maxx){
            secondMax = arr[i];
        }

    }
    cout<<secondMax<<endl;
}


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
printSecondMax(arr,n);


return 0;
}
