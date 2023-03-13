
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=-1;
        int j;
        for(int i=0;i<s.length();i++){
            bool found=false;
             for(j=k+1;j<t.length();j++){

                    if(s[i]==t[j]){
                        k=j;
                        found = true;
                        break;
                    }
             }
            if(j==t.length() && !found){
                return false;
            }
        }

        return true;
    }
};
