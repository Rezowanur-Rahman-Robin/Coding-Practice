#include<bits/stdc++.h>
using namespace std;

 int romanToInt(string s) {
        unordered_map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int ans = mp[s.at(s.length() - 1)];

        for(int i = s.length() - 2; i >= 0; i--){
            char c = s.at(i);
            char c2 = s.at(i + 1);

            if(mp[c] < mp[c2]){
                ans -= mp[c];
            }else{
                ans += mp[c];
            }
        }

        return ans;
    }

int main(){

string str;
cin>>str;

cout<<romanToInt(str)<<endl;

return 0;
}
