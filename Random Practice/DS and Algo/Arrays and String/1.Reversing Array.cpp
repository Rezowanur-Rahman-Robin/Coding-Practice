#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number of elements:";
    cin>>n;

    int A[n];
    int i;
    for(i=0;i<n;i++){
        cin>>A[i];
    }

int s=0,e=n-1;


int temp;
while(s<=e){

temp = A[s];
A[s]=A[e];
A[e]=temp;

s++;
e--;

}


   for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

}
