#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str[10];
    for(int i=0;i<=5;i++) cin>>str[i];

    bool flag = false;
    for(int i=1;i<=5;i++){
        if(str[0][0] == str[i][0]) flag = true;
        if(str[0][1] == str[i][1]) flag = true;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
