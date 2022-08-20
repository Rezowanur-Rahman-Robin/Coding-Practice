#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
               if(s[i]==st.top()){
                st.pop();
               }else{
                st.push(s[i]);
               }
            }

        }

        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){

  string input;
  cin>>input;
  Solution s;
  cout<<"Result:"<<s.removeDuplicates(input)<<endl;


   return 0;
}



