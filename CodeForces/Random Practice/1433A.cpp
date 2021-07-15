#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int A=a;
        int digit=a%10;
        int cnt=0;
        while(a>0)
        {
            a/=10;
            cnt++;
        }

        if(cnt==1)
        {
            cout<<((digit*10)-10)+1<<endl;
        }
        else if(cnt==2)
        {
            cout<<((digit*10)-10)+3<<endl;
        }
        else if(cnt==3)
        {
            cout<<((digit*10)-10)+6<<endl;
        }
        else if(cnt==4)
        {
            cout<<((digit*10)-10)+10<<endl;
        }
    }
}
