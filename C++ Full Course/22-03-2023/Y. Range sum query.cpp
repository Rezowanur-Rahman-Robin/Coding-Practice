#include<bits/stdc++.h>
using namespace std;

int main(){
long long N,Q;
cin>>N>>Q;
long long arr[N];
long long sumArr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
    if(i==0){
        sumArr[i] = arr[i];
    }else{
        sumArr[i] = arr[i]+ sumArr[i-1];
    }
}
while(Q--){
    int first,last;
    cin>>first>>last;

    if(first==1){
        cout<<sumArr[last-1]<<endl;
    }else{
        cout<<sumArr[last-1]-sumArr[first-2]<<endl;
    }
}
return 0;
}
