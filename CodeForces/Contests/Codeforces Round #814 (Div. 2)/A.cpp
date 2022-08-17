#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
long long n,m,x,y;
while(t--){
    cin>>n>>m;
    if((n-1)%2!=0){
        x= n;
        y= m;
    }else{
        x= m;
        y=n;
     }
     if((x-1) %2 != 0){
        if((y-1) %2 ==0){
            cout<<"Burenka"<<endl;
        }else{
            cout<<"Tonya"<<endl;
         }
     }else{
        if((y-1) %2 ==0){
            cout<<"Tonya"<<endl;
        }else{
            cout<<"Burenka"<<endl;
         }
      }
}
return 0;
}
