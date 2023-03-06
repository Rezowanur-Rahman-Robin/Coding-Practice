#include <iostream>
using namespace std;

int main()
{
    int t,f,a,i,j,k;

    cin>>t;
    for(int n=1; n<=t; n++)
    {
        cin>>a>>f;

        for (k =1; k<=f; k++)
        {
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<i;

                }
                cout<<endl;
            }
            for(i=a-1; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<i;

                }
                cout<<endl;
            }
           if(k!=f||n!=t)
            cout<<endl;
        }

    }


return 0;
}
