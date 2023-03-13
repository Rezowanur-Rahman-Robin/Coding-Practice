#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int cnt =0;
        int ans = 0;
        int lastMatching = 0;
        for(int i=0;i<s.length();i++){
                cout<<s[i]<<endl;
            if(mp[s[i]]){
                mp[s[i]]=0;
                i=i-cnt+1;
                cnt=0;

            }

            mp[s[i]]++;
            cnt++;
            cout<<"count:"<<cnt<<endl;
            ans = max(ans,cnt);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string str;
    cin>>str;
    cout<<s.lengthOfLongestSubstring(str)<<endl;

}
