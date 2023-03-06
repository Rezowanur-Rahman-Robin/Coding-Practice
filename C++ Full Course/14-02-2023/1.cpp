#include<iostream>
using namespace std;
int main()
{
    int i,x,n;
    cin>>x;
    for(n=2; n<=x; n++)
    {
        int count=0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {

                count++;
            }
        }
        if(count==0)
        {
            printf("%d ",n);
        }
    }
    return 0;
}
