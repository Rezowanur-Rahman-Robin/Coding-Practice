#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int length = columnTitle.size();
        int ans=0;
        for(int i=length-1 ; i>=0 ; i--){
          ans += pow(26,length-i-1)* (int(columnTitle[i])-64);
        }
        return ans;

    }
};



int main(){


 string columnTitle;
 cin>>columnTitle;

 Solution s;

 cout<<s.titleToNumber(columnTitle)<<endl;


return 0;
}

