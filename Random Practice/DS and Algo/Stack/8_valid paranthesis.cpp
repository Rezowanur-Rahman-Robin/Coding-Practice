#include<bits/stdc++.h>
using namespace std;

bool checkValidParanthesis(string s){
   stack<char> st;
   int length = s.length();
   int i=0;
   while(i<length){

        if(s[i]=='(' ){
            st.push(')');
        }else if(s[i]=='{' ){
            st.push('}');
        }else if(s[i]=='['){
            st.push(']');
        }else {
           if(st.empty()==false && st.top()==s[i]){
            st.pop();
           }else {
               return false;
           }
        }

        i++;
   }
   if(s.empty()){
    return true;
   }else{
    return false;
   }
}

int main(){

  string parenthesisInput;
  cin>>parenthesisInput;
  if(checkValidParanthesis(parenthesisInput)){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }


   return 0;
}

