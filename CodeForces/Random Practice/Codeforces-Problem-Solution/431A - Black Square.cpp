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
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll a , b , c , d;
    cin>>a>>b>>c>>d;
    ll ans=0;
    string s;
    cin>>s;
    ll sz=s.size();
    for(int i=0; i<sz ; i++){
        ll ch=s[i]-'0';
        if(ch==1)
            ans+=a;
        if(ch==2)
            ans+=b;
        if(ch==3)
            ans+=c;
        if(ch==4)
            ans+=d;
    }
    cout<<ans<<endl;
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
