#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size()-1;
        int ans = -1;
        while(start <= end){
            int midpoint = (start + end)/2;

            if(nums[midpoint]==target){
                return true;
            }

            if( nums[start] <= nums[midpoint]){
                if(target >= nums[start] && target <= nums[midpoint]){
                    end = midpoint-1;
                }else{
                    start = midpoint+1;
                }
            }else{
                if(target <= nums[end] && target >= nums[midpoint]){
                    start = midpoint+1;
                }else{
                    end = midpoint-1;
                }

            }
        }
        return false;

    }
};

int main(){

 Solution s;
 vector<int> vec ={1,0,1,1,1};
 cout<<s.search(vec,0);
}
