class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
           mp[nums[i]]++;

        for(auto item : mp){
            if(item.second == 1){
                return item.first;
            }
        }
        return -1;
    }
};
