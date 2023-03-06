#include<iostream>
using namespace std;
int main()
{
    int N,p,q;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    int maximum=A[0];
    p=0;
    for(int i=1; i<N; i++)
    {
        if(maximum<A[i])
        {
            maximum=A[i];
            p=i;
        }
    }
    int minimum=A[0];
    q=0;

    for(int i=1; i<N; i++)
    {
        if(minimum>A[i])
        {
            minimum=A[i];
            q=i;
        }
    }
    int temp=  A[p];
    A[p] = A[q];
    A[q] = temp;

    for(int i=0; i<N; i++)
    {
      cout<<A[i]<<" ";
    }
    return 0;
}
