#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int counter= 0;
    int a[100]={0};
    int climbStairs(int n) {


      if(n==0){
        return 1;
      }
      if(n<0){
        return 0;
      }

      if(a[n] == 0){
        a[n] = climbStairs(n-1) + climbStairs(n-2);
      }
      return a[n];

    }
};

int main(){
    int n;
    cin>>n;

    Solution s;
    cout<<s.climbStairs(n)<<endl;


return 0;
}
