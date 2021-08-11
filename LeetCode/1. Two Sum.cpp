#include<bits/stdc++.h>
using namespace std;

//first approach
/*

  int intFindIndex(vector<int> vec,int p){
     for(int i=0;i<vec.size();i++){
        if(vec[i]==p){
                vec[i]=rand();
        cout<<vec[i]<<endl;
            return i;
        }
     }
     return 0;
    }


vector<int> twoSum(vector<int> nums, int target) {
    vector<int> demoNums=nums;

    int length=nums.size();
    int leftPoint=0;
    int rightPoint=length-1;

    vector<int> answer;

    sort(nums.begin(),nums.end());

    while(leftPoint<rightPoint){
        int firstNumber=nums[leftPoint];
        int secondNumber=nums[rightPoint];

        int sum=firstNumber + secondNumber;

        if(sum>target){
            rightPoint--;
        }else if(sum<target){
            leftPoint++;
        }else{
            answer.push_back(intFindIndex(demoNums,firstNumber));
            answer.push_back(intFindIndex(demoNums,secondNumber));

            return answer;


        }
    }


}

*/


vector<int> twoSum(vector<int> nums, int target) {




    vector<int> result;

    for(auto it1=nums.begin();it1!=nums.end();it1++){
        auto it2=find(it1+1,nums.end(), target- *it1);

        if(it2!=nums.end()){
            result.push_back(it1-nums.begin());
            result.push_back(it2-nums.begin());
        }
    }

    cout<<result[0]<<endl;
    cout<<result[1]<<endl;






}

int main(){
    int sz;
    cin>>sz;
    vector<int> vec;
    vector<int> answer;

    int n;

    for(int i=0;i<sz;i++){
        cin>>n;
        vec.push_back(n);
    }
    int target;
    cin>>target;

    answer = twoSum(vec, target);







return 0;
}







//for leetcode
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

         for(auto it1=nums.begin();it1!=nums.end();it1++){
        auto it2=find(it1+1,nums.end(), target- *it1);

        if(it2!=nums.end()){
            result.push_back(it1-nums.begin());
            result.push_back(it2-nums.begin());
        }

    }
    return result;
    }
};

*/
