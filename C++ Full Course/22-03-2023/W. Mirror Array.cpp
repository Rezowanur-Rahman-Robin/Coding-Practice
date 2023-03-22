
#include<iostream>
using namespace std;
int main()
{
    int m,n,k=0,l=0;
    cin>>m>>n;
    int x[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>x[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<x[i][n-1-j]<<" ";
        }
        cout<<endl;
    }

}

