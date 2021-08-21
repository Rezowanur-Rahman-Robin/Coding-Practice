#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
       if(nums.size()==0)return 0;
       int i=0;
       for(int j=1;j<nums.size();j++){
           if(nums[i]!=nums[j]){
               i++;
               nums[i]=nums[j];
           }

       }
       return i+1;

    }
};

int main(){

int n;
cin>>n;
vector<int> nums;
int temp;
for(int i=0;i<n;i++){
    cin>>temp;
    nums.push_back(temp);
}
Solution s1;
cout<<s1.removeDuplicates(nums)<<endl;


return 0;
}
