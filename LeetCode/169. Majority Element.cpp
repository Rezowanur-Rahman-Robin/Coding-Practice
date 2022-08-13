#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 1;
        int majority = nums[0];

        for(int i =0;i<nums.size();i++){
            if(nums[i]==majority){
                count++;
            }else{
                count--;
                if(count == 0 ){
                    majority =nums[i];
                    count = 1;
                }
            }
        }


        return majority;

    }

    int majorityElementByMap(vector<int>& nums) {
    int majority = -99999;
    int majority_count =-99999;
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        if(mp.count(nums[i])){
            mp[nums[i]]++;
        }else{
            mp[nums[i]]=1;
        }
    }

    for(auto element:mp){
        if(element.second>majority_count){
            majority=element.first;
            majority_count=element.second;
        }
    }

    return majority;

    }
};

int main(){

Solution s;
vector<int> vec = {2,2,1,1,1,2,2};

cout<<s.majorityElement(vec);///linear approach
cout<<s.majorityElementByMap(vec);///map approach
return 0;
}
