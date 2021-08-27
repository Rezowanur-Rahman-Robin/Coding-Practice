#include<bits/stdc++.h>
using namespace std;
/*
f(321) = f(32) +1;
f(32) = f(3) +2;
f(3) = f(0) +3;
f(0) = 0;
*/
int sumOfDigits(int n){
   if(n==0)
    return 0;

   return sumOfDigits(n/10) + n%10;
}
int main(){

int n;
cin>>n;

cout<<sumOfDigits(n);

return 0;
}


