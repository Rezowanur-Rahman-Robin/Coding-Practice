#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
getline(cin,str);

string revString="";
string temp="";
for(int i=0;i<str.length();i++){
    if(str[i]==' '){
         reverse(temp.begin(), temp.end());
         temp+=" ";
         revString+=temp;
         temp = "";

    }else{
        temp.push_back(str[i]);
    }

}
reverse(temp.begin(), temp.end());
revString+=temp;
cout<<revString<<endl;


return 0;
}
