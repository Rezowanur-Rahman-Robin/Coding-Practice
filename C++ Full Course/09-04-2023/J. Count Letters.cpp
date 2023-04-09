#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
int checkArray[26]={0};
cin>>str;
for(int i=0;i<str.length();i++){
    checkArray[str[i]-97]++;
}
for(int i=0;i<26;i++){
    if(checkArray[i]>0){
        char target= char(i+97);
        cout<<target<<" : "<<checkArray[i]<<endl;
    }
}
return 0;
}
