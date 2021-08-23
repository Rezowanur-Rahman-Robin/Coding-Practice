#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <string.h>
#include <bitset>
#define sf scanf
#define pf printf
#define lf double
#define p123 printf("123\n");
#define pn printf("\n");
#define pk printf(" ");
#define p(n) printf("%d",n);
#define pln(n) printf("%d\n",n);
#define s(n) scanf("%d",&n);
#define ss(n) scanf("%s",n);
#define ps(n) printf("%s",n);
#define sld(n) scanf("%lld",&n);
#define pld(n) printf("%lld",n);
#define slf(n) scanf("%lf",&n);
#define plf(n) printf("%lf",n);
#define sc(n) scanf("%c",&n);
#define pc(n) printf("%c",n);
#define gc getchar();
#define ll long long
#define re(n,a) memset(n,a,sizeof(n));
#define len(a) strlen(a)
#define eps 1e-13
#define zero(x) (((x) > 0? (x):(-x)) < eps)
using namespace std;
char a[200000];
int main(){
    int t;
    s(t)
    while(t --){
        int n;
        s(n) gc
        ss(a)
        //cin >> s;
        int temp = 0;
        for(int i = 0;  i< n; i ++){
            if(temp == 2){
                if(a[i] == '1'){
                    p(0)
                    temp = 1;
                }else if(a[i] == '0'){
                    p(1)
                    temp = 1;
                }
            }else if(temp == 1){
                if(a[i] == '1'){
                    p(1)
                    temp = 2;
                }else if(a[i] == '0'){
                    p(0)
                    temp = 0;
                }
            }else if(temp == 0){
                if(a[i] == '1'){
                    p(1)
                    temp = 2;
                }else if(a[i] == '0'){
                    p(1)
                    temp = 1;
                }
            }
        }
        pn

    }
    return 0;
}
