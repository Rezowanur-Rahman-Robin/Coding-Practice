

#include<bits/stdc++.h>
using namespace std;

int main(){

   long long t;

   cin>>t;

   while(t--){
    long long n;
     bool found=false;
    cin>>n;
    if(n%2!=0){
        cout<<"YES"<<endl;
    }else{
      for(long long  i=n/2;i>2;i/=2){

        if(i & 1){

            if(n%i==0){
                cout<<"YES"<<endl;
                found=true;
                break;
            }
        }
      }
      if(!found){
        cout<<"NO"<<endl;
      }
    }
   }


}
