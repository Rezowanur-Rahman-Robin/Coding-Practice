#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int N;
    cin>>N;
    string S,T;
    cin>>S>>T;

    for(int i=0;i<N;i++){
        cout<<S[i]<<T[i];
    }
    cout<<endl;
}
