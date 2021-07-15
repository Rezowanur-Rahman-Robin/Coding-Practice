#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld ",&num);
#define dbg(n)                cout<<(n)<<endl;
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll f,r,c; cin>>f>>r>>c;
    ll mini=min({f/3,r/2,c/2});
    ll days=mini*7;
    f-=(mini*3);
    r-=(mini*2);
    c-=(mini*2);
    ll cnt=0;
    ll ara[]={2,1,1,2,3,1,3};
    ll rem=0;
    for(int i=0; i<7; i++){
        ll day=0,a=f,b=r,d=c;
        for(int j=i; ;j++){

            if(j==7)
                j=0;

            if(ara[j]==1){
                if(a==0){
                    break;
                }else{
                    a--;
                    day++;
                }
            }
            if(ara[j]==2){
                if(b==0){
                    break ;
                }
                else{
                    day++;
                    b--;
                }
            }
            if(ara[j]==3){
                if(d==0){
                    break;
                }else{
                    day++;
                    d--;
                }
            }
            
        }
        
        rem=max(rem,day);
    }
    cout<<days+rem<<endl;
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
