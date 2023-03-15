
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows=rowIndex+1;
        vector<vector<int>> result(numRows);

        for(int i=0;i<numRows;i++){
            result[i].resize(i+1,1);
            for(int j=1;j<i;j++){
                result[i][j]=result[i-1][j-1]+result[i-1][j];
            }
        }

        return result[rowIndex];
    }
};
