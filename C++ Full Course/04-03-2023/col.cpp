#include<bits/stdc++.h>
using namespace std;

int main(){

string str,st;
int n;
cin>>str;
st="";
cin>>n;
for(int i=0;i<n+1;i++){
    for(int j=i;j<str.size();j+=(n+1)){
        st += str[j];
    }
}

cout<<st<<endl;
}
