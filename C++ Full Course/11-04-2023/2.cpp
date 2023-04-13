#include<bits/stdc++.h>
using namespace std;

int main(){
while(1){
    string str;
    cin>>str;
    int freq[129]={0};
    for(int i=0;i<str.length();i++){
        int index=int(str[i]);
        freq[index]++;
    }
    for(int i=128;i>=32;i--){
        if(freq[i]>0){
            cout<<i<<" "<<freq[i]<<endl;
        }

    }
}

return 0;
}

