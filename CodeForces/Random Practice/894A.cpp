#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            for(int k=j+1; k<s.size(); k++)
            {
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
