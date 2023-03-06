#include<iostream>
#include<math.h>
using namespace std;


int main(){

long long int A,B,C,D;
cin>>A>>B>>C>>D;

if(B*log(A)>D*log(C)){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

return 0;
}
