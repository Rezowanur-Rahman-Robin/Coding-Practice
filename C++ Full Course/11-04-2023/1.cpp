#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
cin>>str;
int value = 7;
for(int i=0;i<str.length();i++){
    cout<<char(str[i]-value);
}

return 0;
}
