
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,i,x=0;
    scanf("%lld",&n);
    while(n>=1){
        if(n%2==1){
            x++;
            n--;
        }
        else{
            n/=2;
        }
    }
    printf("%d\n",x);
    return 0;
}
