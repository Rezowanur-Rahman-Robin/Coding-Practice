#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
string targetSubStr="hello";

cin>>str;
int i=0;
int j=0;
int cn = 0;
while(i<str.length() && j<targetSubStr.length()){

        if(str[i]==targetSubStr[j]){
            cn++;
            j++;
        }

    i++;
}
if(cn==5) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


return 0;
}
