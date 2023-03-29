class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int i = 0;
        int j = arr.size()-1;
        int n = arr.size();
        while(i<(n-1) && arr[i+1]>arr[i]){
            i++;
        }
        while(j>0 && arr[j-1]>arr[j]){
            j--;
        }
        return i==j;
    }
};
