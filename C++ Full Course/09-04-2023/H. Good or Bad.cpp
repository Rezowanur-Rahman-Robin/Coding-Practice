#include<bits/stdc++.h>
using namespace std;
bool isSubString(string str1, string str2){
int k=0;
for(int i=0;i<str1.length();i++){
    if(str1[i]==str2[k]) {
        k++;
    }else{
        k=0;
    }
    if(k==str2.length()) return true;
}
return false;
}

int main(){
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    if(isSubString(str,"101") || isSubString(str,"010")){
        cout<<"Good"<<endl;
    }else{
        cout<<"Bad"<<endl;
    }
}

return 0;
}







