
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto item: nums){
            mp[item]++;
        }
        for(auto i : mp){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
};
