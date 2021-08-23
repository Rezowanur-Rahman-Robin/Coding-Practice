#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int mx=nums[0];
        int number = nums[0];



            for(int i = 1 ; i<nums.size();i++){
                number = max(nums[i] , number + nums[i] );

                mx = max(number,mx);


            }



        return mx;


    }
};

int main(){

    int n ;
    cin>>n;

    vector<int> nums;

    for(int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution s;

    cout<<s.maxSubArray(nums)<<endl;


return 0;
}
