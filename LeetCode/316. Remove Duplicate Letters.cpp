#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int> mp;
        string t="";
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1) {
                t+=s[i];
                mp[s[i]]=0;
            }

        }
        return t;
    }
};

int main()
{
Solution s;
cout<<s.removeDuplicateLetters("cbacdcbc");
}
