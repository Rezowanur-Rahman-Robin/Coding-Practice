#include<bits/stdc++.h>
using namespace std;

int main(){
while(1){
    string str1,str2;
    cin>>str1>>str2;
    string ans="";
    int temp = 0;
    for(int i=0;i<str1.length();i++){

        for(int j=temp;j<str2.length();j++){
            if(str2[j]==str1[i]){
                ans+=str1[i];
                temp=j+1;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

return 0;
}
