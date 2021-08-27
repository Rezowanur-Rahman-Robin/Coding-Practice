#include<bits/stdc++.h>
using namespace std;

///adding two numbers without * operator
///as like as pow
/*
f(3,2) = f(3,1) + 3;
f(3,1) = f(3,0) + 3;
f(3,0) = 0;
*/
int multiply(int x,int n){
   if(n==0)
    return 0;

   return multiply(x,n-1) + x;
}
int main(){

int n,x;
cin>>x;
cin>>n;

cout<<multiply(x,n);

return 0;
}



