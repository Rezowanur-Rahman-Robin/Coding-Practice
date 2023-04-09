#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    if(str.length()<=10){
        cout<<str<<endl;
    }else{
        cout<<str[0]<<to_string(str.length()-2)<<str[str.length()-1]<<endl;
    }
}

return 0;
}

///number to string : str = to_string(number)
///string to number : nmbr = stoi(string)
