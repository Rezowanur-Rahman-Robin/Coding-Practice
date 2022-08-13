#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> majorityElementByMap(vector<int>& nums) {
    vector<int> answer;
    int length= nums.size();
    map<int,int> mp;
    for(int i=0;i<length;i++){
        if(mp.count(nums[i])){
            mp[nums[i]]++;
        }else{
            mp[nums[i]]=1;
        }
    }

    for(auto element:mp){

        if(element.second>length/3){
            answer.push_back(element.first);
        }
    }

    return answer;

    }
};

int main(){

Solution s;
vector<int> vec = {3,2,3};
vector<int> ans;

ans = s.majorityElementByMap(vec);

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";

}

return 0;
}

