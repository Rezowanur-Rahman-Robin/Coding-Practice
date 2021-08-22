#include<bits/stdc++.h>

using namespace std;

int main()

{



    int t,i,j,a,s,ar[100000],n,v,f,cn,s1,k;

    cin>>t;

    while(t--)

    {

        s=2,v=1,cn=0;

        ar[0]=2;

        cin>>n;

        if(n<2)

            cout<<"0"<<endl;

        else if(n<4)

            cout<<"1"<<endl;

        else

        {

            for(i=2; s<=n; i++)

            {

                s=s+((2*i)+(i-1));

                ar[v]=s;

                v++;

            }

            for(j=v-1; j>=0; j--)

            {

                if(ar[j]<=n)

                {

                    n=n-ar[j];

                    cn++;

                    j++;

                }

            }

            cout<<cn<<endl;



        }



    }

}
