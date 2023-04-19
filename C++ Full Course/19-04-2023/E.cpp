#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int p=0,q=0;
    int length = S.length();
    for(int i=0; i<length; i++)
    {
        if(i%2==0)
        {
            if(!(S[i]=='R'||S[i]=='U'||S[i]=='D'))
            {
                p++;
            }

        }
        if(i%2!=0)
        {
            if(!(S[i]=='L'||S[i]=='U'||S[i]=='D'))
            {
                q++;
            }

        }
    }
    if(p==0&&q==0)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
}
