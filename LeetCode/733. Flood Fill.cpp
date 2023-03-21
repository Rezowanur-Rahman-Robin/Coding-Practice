#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void myFloodFill(vector<vector<int>>& img, int sr, int sc,int srcColor, int color){
       int m = img.size()-1;
       int n = img[0].size()-1;
       if(sr>m || sr<0) return ;
       if(sc>n || sc<0) return ;
       if(img[sr][sc]==srcColor && img[sr][sc]!=color){
           img[sr][sc]=color;

       myFloodFill(img,sr+1,sc,srcColor,color);
       myFloodFill(img,sr-1,sc,srcColor,color);
       myFloodFill(img,sr,sc+1,srcColor,color);
       myFloodFill(img,sr,sc-1,srcColor,color);
       }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      int startColor = image[sr][sc];
      vector<vector<int>> ans = image;
      myFloodFill(ans,sr,sc,startColor,color);
      return ans;

    }
};

int main(){
Solution s;
vector<vector<int>> vec = {
                           {1,1,1},
                           {1,1,0},
                           {1,0,1},
                          };
vector<vector<int>> result ;

result = s.floodFill(vec,1,1,2);

for(auto i:result){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
}

}
