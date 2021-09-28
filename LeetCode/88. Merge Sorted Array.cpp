#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


       for (auto i = 0 ; i < n ; i++)
        {
             nums1[m+n-1-i] = nums2[i];
             ///nums1[m-1-i] = nums2[i]; for sowing output in codeblocks
        }

        sort( nums1.begin() , nums1.end() );
        return nums1;
    }
};

int main(){

vector<int> nums1 = {1,2,3,0,0,0};
vector<int> nums2 = {2,5,6};

Solution s;

vector<int> answers = s.merge(nums1,nums1.size(),nums2,nums2.size());

for(int i = 0; i<answers.size();i++){
    cout<<answers.at(i)<<" ";
}
cout<<endl;


return 0;
}
