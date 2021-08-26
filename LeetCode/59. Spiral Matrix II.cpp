#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralOrder(int n) {
        int counting = 0;
        int rowStart = 0 , rowEnd = n-1 , colStart = 0 ,colEnd = n-1;
        vector<vector<int>> spiralMatrix(n,vector<int> (n, 0));

        if(n==0){
            return spiralMatrix;
        }
        while(rowStart <= rowEnd && colStart <= colEnd){
            ///input starting row
            for(int i = colStart ; i<=colEnd ; i++){
                spiralMatrix[rowStart][i]=(counting + 1);
                counting++;
            }
            rowStart++;

            if(counting == n*n )
                return spiralMatrix;

             ///input End Column
              for(int i = rowStart ; i<=rowEnd ; i++){
                spiralMatrix[i][colEnd] = (counting + 1);
                counting++;
            }
            colEnd--;

            if(counting == n*n )
                return spiralMatrix;

            ///input ending row
            for(int i = colEnd ; i>=colStart ; i--){
                spiralMatrix[rowEnd][i] = (counting + 1);
                counting++;
            }
            rowEnd--;

            if(counting == n*n )
                return spiralMatrix;

            ///input Start Column
              for(int i = rowEnd ; i>=rowStart ; i--){
                spiralMatrix[i][colStart] = (counting + 1 );
                counting++;
            }
            colStart++;
            if(counting == n*n )
                return spiralMatrix;
        }
        return spiralMatrix;
    }
};

int main(){

int N;
cin>>N;
Solution s;
vector<vector<int>> spiralMatrix;
spiralMatrix = s.spiralOrder(N);
        for(int i=0;i<spiralMatrix.size();i++){
          for(int j=0;j<spiralMatrix[0].size();j++){
            cout<<spiralMatrix[i][j]<<" ";
          }
         cout<<endl;
        }
return 0;
}
