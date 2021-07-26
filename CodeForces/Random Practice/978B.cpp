#include<bits/stdc++.h>
using namespace std;
//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

int main()
{
    int n,m,i,j,a,b,ck=0;
    sc1(n);
    string arr;
    cin>>arr;
    for(i=0; i<n; i++){
        if(arr.compare(i, 3, "xxx")==0)
            ck++;
    }
    cout<<ck<<endl;
}
