#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();
        int counting = 0;

        int rowStart = 0 , rowEnd = m-1 , colStart = 0 ,colEnd = n-1;

        vector<int> spiralMatrix;

        if(matrix.empty()){
            return spiralMatrix;
        }
        while(rowStart <= rowEnd && colStart <= colEnd){
            ///print starting row
            for(int i = colStart ; i<=colEnd ; i++){
                spiralMatrix.push_back(matrix[rowStart][i]);
                counting++;
            }
            rowStart++;

            if(counting == m*n )
                return spiralMatrix;

             ///print End Column
              for(int i = rowStart ; i<=rowEnd ; i++){
                spiralMatrix.push_back(matrix[i][colEnd]);
                counting++;
            }
            colEnd--;

            if(counting == m*n )
                return spiralMatrix;

            ///print ending row
            for(int i = colEnd ; i>=colStart ; i--){
                spiralMatrix.push_back(matrix[rowEnd][i]);
                counting++;
            }
            rowEnd--;

            if(counting == m*n )
                return spiralMatrix;


            ///print Start Column
              for(int i = rowEnd ; i>=rowStart ; i--){
                spiralMatrix.push_back(matrix[i][colStart]);
                counting++;
            }
            colStart++;

            if(counting == m*n )
                return spiralMatrix;
              }

        return spiralMatrix;

    }
};

int main(){

int m;
int n;
cin>>m;
cin>>n;
vector<vector<int>> matrix(m);
int temp;

for(int i=0;i<m;i++){
    for(int j=0; j< n ; j++){
        cin>>temp;
        matrix[i].push_back(temp);
    }
}

Solution s;

vector<int> spiralMatrix;

spiralMatrix = s.spiralOrder(matrix);

        for(int i=0;i<spiralMatrix.size();i++){
        cout<<spiralMatrix[i]<<" ";
}


return 0;
}
