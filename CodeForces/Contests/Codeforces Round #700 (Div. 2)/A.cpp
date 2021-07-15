#include<bits/stdc++.h>
using namespace std;

int t,i=0;

int main(){

 cin>>t;

 while(i<t){

 string s;
 cin>>s;

 for(int j=0;j<s.length();j++){

        bool check=j%2==0? true:false;

        if(check ){

            if(s[j]=='a'){
                static_cast<char>(s[j]++);
            }else{
               s[j]='a';
            }


        }
        else{
            if(s[j]=='z'){
                static_cast<char>(s[j]--);
            }else{
               s[j]='z';
            }
        }


 }
  cout<<s<<endl;



    i++;
 }
}

