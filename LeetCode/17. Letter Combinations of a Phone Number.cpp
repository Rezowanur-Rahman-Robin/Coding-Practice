#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;
    void findAns(string digits,int index){
    if(index==digits.length()) return;

    for(auto item:mp[digits[index]]){
        string temp="";
        temp+=item;
        findAns(digits,index+1);
        temp+=item;
    }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,vector<char>> mp;
        mp['2']={'a','b','c'};
        mp['3']={'d','e','f'};
        mp['4']={'g','h','i'};
        mp['5']={'j','k','l'};
        mp['6']={'m','n','o'};
        mp['7']={'p','q','r','s'};
        mp['8']={'t','u','v'};
        mp['9']={'w','x','y','z'};

    }
     findAns(digits,0);
     return result;

};

int main(){
Solution s;
vector<string> result;
result = s.letterCombinations("23");
for(auto item : result) cout<<item<<" ";

return 0;
}
