#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592654
int main()
{
    int n;
    cin>>n;
    int i,cnt=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
