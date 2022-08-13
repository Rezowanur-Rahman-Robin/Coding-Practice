class Solution {
public:

    int getFirstLast(vector<int>& nums, int target,bool getFirst){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
          int midpoint = (l+r)/2;

          if(nums[midpoint]==target){
             ans = midpoint;
          if(getFirst){
             r = midpoint - 1;
          }else{
             l = midpoint + 1;
          }

         }
         if(nums[midpoint]<target){
           l=midpoint+1;
        }
         if(nums[midpoint]>target){
          r=midpoint-1;
        }
      }

     return ans;

     }



    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> v(2,-1);

        int first = getFirstLast(nums,target,true);
        if(first ==-1 ){
            return v;
        }

        int last = getFirstLast(nums,target,false);
        v[0]=first;
        v[1]=last;

        return v;

    }


};
