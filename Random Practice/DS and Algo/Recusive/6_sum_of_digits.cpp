#include<bits/stdc++.h>
using namespace std;
/*
f(3) = f(2) +3;
f(2) = f(1) +2;
f(1) = f(0) +1;
f(0) = 0;
*/
int sumOfDigits(int n){
   if(n==0)
    return 0;

   return sumOfDigits(n-1) + n;
}
int main(){

int n;
cin>>n;

cout<<sumOfDigits(n);

return 0;
}


