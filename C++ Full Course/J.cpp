#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n){
for(int i=2;i<= sqrt(n);i++){
    if(n%i==0){
        return false;
    }
}
return true;
}


int main(){

int n;
cin>>n;

for(int i=2;i<= n;i++){
    if(checkPrime(i)){
        cout<<i<<" ";
    }
}


return 0;
}
