#include<bits/stdc++.h>
using namespace std;

/*
f(k) = sum(k-1) + 1.0/pow(2,k);
*/
double geoMatricSum(int k){
    if(k==0)
        return 1;

    return geoMatricSum(k-1) + 1.0/pow(2,k);
}
int main(){

int n;
cin>>n;

cout<<geoMatricSum(n);

return 0;
}





