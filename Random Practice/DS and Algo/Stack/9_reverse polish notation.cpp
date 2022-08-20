#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
         for(auto str: tokens){
            if(str == "+"){
                int first =st.top();
                 st.pop();
                int second = st.top();
                 st.pop();
                 st.push(second + first);
            }else if(str == "-"){
                 int first =st.top();
                 st.pop();
                int second = st.top();
                 st.pop();
                 st.push(second - first);
            }else if(str == "*"){
                 int first =st.top();
                 st.pop();
                int second = st.top();
                 st.pop();
                 st.push(second * first);
            }else if(str == "/"){
                 int first =st.top();
                 st.pop();
                int second = st.top();
                 st.pop();
                 st.push(second / first);
            }else{
                int value = stoi(str);
                st.push(value);
            }
         }
         return st.top();
    }
};

int main(){

  vector<string> input;
  int length;
  cin>>length;
  while(length--){
    string temp;
    cin>>temp;
    input.push_back(temp);
  }
  Solution s;
  cout<<"Result:"<<s.evalRPN(input)<<endl;


   return 0;
}


