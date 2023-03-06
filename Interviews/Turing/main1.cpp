#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
       unordered_map<int,int> a;
	   for(auto x: nums)
		   a[x]++;
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
    }


int main() {
  vector<int> nums = {8,5,8,4,4};
/*
  int result = nums[0]; // Start with the first element
  for (int i = 1; i < 7; i ++){
    result ^= nums[i];
  }
  cout << result << endl;
*/

  int resul = singleNumber(nums);
   printf("Result %d", resul);
}
