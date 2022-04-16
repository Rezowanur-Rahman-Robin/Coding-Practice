#include<bits/stdc++.h>
using namespace std;

int calcTotalStairs(int n){
 if(n==0 || n==1){
    return 1;
 }else if(n<0){
    return 0;
 }
 int s = calcTotalStairs(n-3)+calcTotalStairs(n-2)+calcTotalStairs(n-1);

return s;
}

int main(){

cout<<calcTotalStairs(4)<<endl;


return 0;
}
