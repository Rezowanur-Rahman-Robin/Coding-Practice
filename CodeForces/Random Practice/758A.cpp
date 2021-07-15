#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d\n",a[n-1]*n-sum);
    return 0;
}
