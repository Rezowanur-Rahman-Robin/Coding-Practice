#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> vec(256,-1);
       int l=0,ans=0;
       for(int r=0;r<s.size();r++){
           if(vec[s[r]]!=-1 && l<vec[s[r]]+1){
               l = vec[s[r]] + 1;
           }
           vec[s[r]] = r;
           ans = max(ans,r-l+1);
       //cout<<s[r]<<"---->"<<"l:"<<l<<" r:"<<r<<" max:"<<ans<<endl;
       }
       return ans;
    }
};

int main(){
Solution s;
string str = "abbbbca";
cout<<s.lengthOfLongestSubstring(str)<<endl;
}
