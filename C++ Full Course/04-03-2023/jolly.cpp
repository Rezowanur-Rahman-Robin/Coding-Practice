#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n;
    while(cin>>n)
    {
        int c=0;
        int A[n];
        int diff[3000]={0};
        for(int i=0; i<n; i++)
        {
            cin>>A[i];

        }
        for(int i=0; i<n-1; i++)
        {
            int temp = abs(A[i+1]-A[i]);
            diff[temp]++;
        }


        for(int i=1; i<n; i++)
        {

            if(diff[i]==0)
            {
                cout<<"Not Jolly"<<endl;
                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<"Jolly"<<endl;
        }
    }
}
