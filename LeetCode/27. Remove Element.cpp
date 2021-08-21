#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==val){
                nums.erase(nums.begin()+i);
                 i--;
            }

        }
        return nums.size();

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
int val;
cin>>val;
Solution s1;
cout<<s1.removeElement(nums,val)<<endl;


return 0;

return 0;
}
