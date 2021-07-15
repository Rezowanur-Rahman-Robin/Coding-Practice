#include<bits/stdc++.h>
using namespace std;

void printPrefix(string str){
 for(int i=0;i<str.length();i++){
    for(int j=0;j<=i;j++){
        cout<<str[j];
    }
    cout<<endl;
 }
}

void printSuffix(string str){
 for(int i=str.length()-1;i>=0;i--){
    for(int j=i;j<str.length();j++){
        cout<<str[j];
    }
    cout<<endl;
 }
}

int main(){

string str;
cin>>str;

printPrefix(str);

printSuffix(str);

return 0;
}


