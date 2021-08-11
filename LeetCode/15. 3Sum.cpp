#include<bits/stdc++.h>
using namespace std;
/*
int binarySearch(vector<int> vec, int start, int end, int element){

if (end >= start) {
            int mid =(start+end)/2;

            if(vec[mid]==element){
                return mid;
            }
             if(vec[mid] < element){
              return binarySearch(vec,mid+1,end,element);
            }

               return binarySearch(vec,start,mid-1,element);
           }

            return -1;
}




    vector<vector<int>> threeSum(vector<int>& nums) {


        vector< vector<int>> answer;

        if(nums.size()< 3){
            return answer;
        }else{

            sort(nums.begin() , nums.end());

            auto length=nums.size();

            vector<int> triple;

            for(auto i = 0; i<length-2 ; i++){



                for(auto j=i+1 ; j< length-1 ; j++){

                    triple.clear();

                    int targetNumber= 0-(nums[i] + nums[j]);

                    int thirdnumberIndex= binarySearch(nums,j+1,length-1,targetNumber);


                    if(thirdnumberIndex != -1){

                        triple.push_back(nums[i]);
                        triple.push_back(nums[j]);
                        triple.push_back(nums[thirdnumberIndex]);

                        answer.push_back(triple);

                        cout<<nums[i]<<" "<<nums[j]<<" "<<nums[thirdnumberIndex]<<endl<<endl;





                    }

                }
            }
        }




        if(answer.size()>1){
                sort(answer.begin(),answer.end());
                 answer.erase( unique( answer.begin(), answer.end() ), answer.end() );

        }

        return answer;
}

*/


 vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                  ans.push_back({nums[i],nums[j],nums[k]});
                  while(j<k&&nums[j]==nums[j+1])j++;
                  while(k>j&&nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
                else if(sum>0)
                    k--;
                else
                    j++;
            }
            while(i<n-1&&nums[i]==nums[i+1])i++;
        }
        return ans;
    }

int main(){

vector<int> vec;

int n;

cin>>n;

int temp;

for(int i=0;i<n;i++){
    cin>>temp;
    vec.push_back(temp);
}


vector< vector<int> > answer;

answer=threeSum(vec);

for(int i=0;i<answer.size();i++){
    for(int j=0;j<answer[i].size();j++){
        cout<<answer.at(i).at(j)<<" ";
    }
    cout<<endl;
}






return 0;
}



/*

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                  ans.push_back({nums[i],nums[j],nums[k]});
                  while(j<k&&nums[j]==nums[j+1])j++;
                  while(k>j&&nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
                else if(sum>0)
                    k--;
                else
                    j++;
            }
            while(i<n-1&&nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};

*/
