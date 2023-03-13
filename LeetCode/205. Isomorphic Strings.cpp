
class Solution {
public:
    bool isIsomorphic(string s, string t) {


       int sLength = s.length();
       int tLength = t.length();
       unordered_map<char,char> mp,mp2;
       if(sLength != tLength) return false;

        for(int i=0;i<sLength;i++){
            if(mp[s[i]] && mp[s[i]] != t[i]) return false;
            if(mp2[t[i]] && mp2[t[i]] != s[i]) return false;
            mp[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;



    }
};
