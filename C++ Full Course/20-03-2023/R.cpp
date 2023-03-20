#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N],B[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    for(int j=0; j<N; j++)
    {
        cin>>B[j];
    }

    int m=0;
    for(int i=0; i<N; i++)
    {
        int count=0;
        for(int j=0; j<N; j++)
        {
            if(A[i]==B[j])
            {
                count++;
            }
        }
        if (count>0)
        {
            m++;
        }
        //cout<<m<<endl;

    }
    //cout<<m<<endl;
    if(m==N)
    {
        cout<<"yes";
    }
    else
        cout<<"no";

}
