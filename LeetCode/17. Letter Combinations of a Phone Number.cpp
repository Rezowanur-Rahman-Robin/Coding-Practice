class Solution {
public:

    void solve(string digits,vector<string> &ans,string output,string mp[],int position){
         if(position>=digits.length()) {
             ans.push_back(output);
             return;
         }
         int number = digits[position]-'0';
         string target = mp[number];
         for(int i=0;i<target.length();i++){
             output.push_back(target[i]);
             solve(digits,ans,output,mp,position+1);
             output.pop_back();
         }
    }
    vector<string> letterCombinations(string digits) {
        string mp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.length()==0) return ans;
        string output = "";
        solve(digits,ans,output,mp,0);
        return ans;
    }
};
