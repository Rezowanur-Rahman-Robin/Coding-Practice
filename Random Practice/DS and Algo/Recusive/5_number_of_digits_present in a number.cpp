#include<bits/stdc++.h>
using namespace std;
/*
456
45
4
0

int counting=0;
int numofDigits(int n){
  if(n==0){
    return counting;
  }else{
      counting++;
      n=n/10;
      return numofDigits(n);
  }
}
*/

///better way
int numofDigits(int n){
    if(n==0){
        return 0;
    }
    return numofDigits(n/10) +1;
}
int main(){

int n;
cin>>n;

cout<<numofDigits(n);

return 0;
}

