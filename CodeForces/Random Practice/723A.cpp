#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c;
    int k[3];
    for(i=0;i<3;i++)
    {
        cin>>k[i];
    }
    sort(k,k+3);
    if(k[0]<k[1]&& k[1]<k[2])
       {
            a=k[1]-k[0];
            b=k[2]-k[1];
            c=a+b;
       }

       cout<<c<<endl;
}
