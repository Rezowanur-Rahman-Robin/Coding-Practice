#include<bits/stdc++.h>
using namespace std;

///count number of zero inside a number

/*
f(30501) = f(3050) + 0;
f(3050) = f(305) + 1;
f(305) = f(30) + 0;
f(30) = f(3) + 1;
f(3) = f(0) + 0;
f(0) = 0 ;
*/
int countZeros(int n){
   if(n==0)
    return 0;

    int lastDigit = n%10;
    if(lastDigit==0){
           return countZeros(n/10) + 1;
    }else {
           return countZeros(n/10) ;
      }
}
int main(){

int n;
cin>>n;

cout<<countZeros(n);

return 0;
}




