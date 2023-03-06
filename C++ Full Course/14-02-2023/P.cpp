#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

long long int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
bool divisibleTwo=true;
int cnt = 0;
while(divisibleTwo){
    for(int i=0;i<n;i++){
      if(A[i]%2!=0){
        divisibleTwo=false;
        break;
      }
    }
    if(divisibleTwo){
        cnt++;
    for(int i=0;i<n;i++){
      A[i]=A[i]/2;
    }
    }
}

cout<<cnt<<endl;

return 0;
}
