#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A >>B >>C;
    if(A>=B&&A>=C)
    {
        if(B<=C)
        {
            cout<<B<<" ";
        }
        else
        {
            cout<<C<<" ";
        }
        cout<<A;

    }
    else if(B>=A&&B>=C)
    {
        if(A<=C)
        {
            cout<<A<<" ";
        }
        else
        {
            cout<<C<<" ";
        }
        cout<<B;

    }
    else if(C>=A&&C>=B)
    {
        if(A<=B)
        {
            cout<<A<<" ";
        }
        else
        {
            cout<<B<<" ";
        }
        cout<<C;
    }
    return 0;
}
