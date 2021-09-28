#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> answers;

        int sizeOfnums1 = nums1.size();
        int sizeOfnums2 = nums2.size();

        int i=0;
        int j=0;
        while(i<sizeOfnums1 || j<sizeOfnums2 ){
                if(j==sizeOfnums2 || nums1.at(i)<=nums2.at(j)){
                    answers.push_back(nums1.at(i));
                    i++;
                }else{
                    answers.push_back(nums2.at(j));
                    j++;
                }

        }

        return answers;
    }
};

int main(){

vector<int> nums1 = {0,3,4,31};
vector<int> nums2 = {4,6,30};

Solution s;

vector<int> answers = s.merge(nums1,nums1.size(),nums2,nums2.size());

for(int i = 0; i<answers.size();i++){
    cout<<answers.at(i)<<" ";
}
cout<<endl;


return 0;
}
