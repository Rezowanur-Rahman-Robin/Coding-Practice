#include<iostream>
using namespace std;

int main(){

int a,b,c,d,multiplication;
cin>>a>>b>>c>>d;

a = a%100;
b = b%100;
c = c%100;
d = d%100;

multiplication = a*b*c*d;

int ans = multiplication%100;
if(ans<10){
    cout<<"0"<<ans<<endl;
}else{
   cout<<ans<<endl;
}


return 0;

}
