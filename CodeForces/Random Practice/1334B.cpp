#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,c,cn,t;
    double s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        {
            cn=0;
            s=0;
            c=1;
            int a[n+9];
            for(i=0; i<n; i++)
                cin>>a[i];
            sort(a,a+n);
            for(i=n-1; i>=0; i--)
            {
                s+=a[i];
                if(s/(1.0*c)>=x)
                {
                    cn++;
                    c++;
                }
                else
                    break;
            }
        }
        cout<<cn<<endl;
    }
}
