#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int path(int x, int y, int m, int n, vector<vector<int>> &dp){
        if(x == m-1 && y == n-1){
            return 1;
        }
        if(x >= m || y >= n){
            return 0;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        else
        return dp[x][y] = path(x+1, y, m, n, dp) + path(x, y+1, m, n, dp);

    }

    int uniquePaths(int m, int n) {
     vector<vector<int>> dp(m, vector<int>(n, -1));
    return path(0, 0, m, n, dp);

    }
};

int main(){

Solution s;
cout<<s.uniquePaths(3,7)<<endl;

return 0;
}
