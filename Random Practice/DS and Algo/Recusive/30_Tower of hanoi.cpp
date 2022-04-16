#include<bits/stdc++.h>
using namespace std;

int totalSteps(int n){
if (n==0){
    return 0;
}
return totalSteps(n-1) + 1 + totalSteps(n-1);
///      A->B                    B->C
}

int main(){
int no_of_disk=3;

cout<<totalSteps(no_of_disk)<<endl;
}
