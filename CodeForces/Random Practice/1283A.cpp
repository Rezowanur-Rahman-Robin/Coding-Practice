#include<iostream>

using namespace std;

int main(){



long long int t,h,m,r;

cin>>t;

while(t--)

{

    cin>>h>>m;

    r=((24-h)*60)-m;

    cout<<r<<endl;

}



}

