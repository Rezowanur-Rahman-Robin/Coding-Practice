#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(cnt == 0 && s[i] == ' ')
                continue;
            if(cnt != 0 && s[i] == ' ')
                break;
            cnt++;
        }

        return cnt;
    }
};

int main(){

string str;
cin>>str;
Solution s;
cout<<s.lengthOfLastWord(str)<<endl;

return 0;
}
