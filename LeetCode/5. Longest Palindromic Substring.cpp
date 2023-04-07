#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        vector<string> substrVec;
        string ans;
        int count = 0;
        for(int i=0;i<s.length();i++){
            string temp="";
            for(int j=i;j<s.length();j++){
                temp += s[j];
                substrVec.push_back(temp);
            }
        }
        for(int i=0;i<substrVec.size();i++){
            int l = substrVec[i].length();
          if(check(substrVec[i],0,l-1)){
              if(l>count){
                count = l;
                ans = substrVec[i];
              }

          }
        }
        return ans;
    }
};

int main(){

Solution s;
cout<<s.longestPalindrome("cbbd");

}
