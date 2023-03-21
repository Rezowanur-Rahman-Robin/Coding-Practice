class Solution {
public:
    bool validPoint(vector<vector<char>>& grid,int x,int y,int m,int n){
        if(x>=0 && y>=0 && x<m && y<n && grid[x][y]=='1'){
            return true;
        }
        return false;
    }
    void DFS(vector<vector<char>>& grid,int x,int y,int m,int n){
      grid[x][y]='0';
      if(validPoint(grid,x-1,y,m,n)){
          DFS(grid,x-1,y,m,n);
      }
      if(validPoint(grid,x+1,y,m,n)){
          DFS(grid,x+1,y,m,n);
      }
      if(validPoint(grid,x,y-1,m,n)){
          DFS(grid,x,y-1,m,n);
      }
      if(validPoint(grid,x,y+1,m,n)){
          DFS(grid,x,y+1,m,n);
      }
    }
    int numIslands(vector<vector<char>>& grid) {
         int m = grid.size();
         int n = grid[0].size();
         int result = 0;
         for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                 if(grid[i][j]=='1'){
                     result++;
                     DFS(grid,i,j,m,n);
                 }
             }
         }
         return result;
    }
};
