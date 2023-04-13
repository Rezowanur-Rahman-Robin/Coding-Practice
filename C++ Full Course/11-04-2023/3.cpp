#include<bits/stdc++.h>
using namespace std;

int main(){
while(1){
    int arr[128];
    arr[48]=57;
    arr[49]=96;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
                int index = int(str[i]);
            cout<<char(arr[index]);
        }else{
            cout<<" ";
        }
    }

}

return 0;
}


