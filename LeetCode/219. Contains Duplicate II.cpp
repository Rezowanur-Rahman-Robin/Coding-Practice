
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int p=0;p<nums.size();p++){
            int nm = nums[p];
           if(mp.count(nm)){
              if(abs(p-mp[nm])<=k){
                  return true;
              }
           }
            mp[nums[p]]=p;

        }
        return false;
    }
};
