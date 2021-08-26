#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> nums,int target){




    int length = nums.size();
    int first = 0;
    int last = length-1;



    while(first <= last){
        int middle =(first + last )/2;

        if(nums[middle]==target){
            return middle;
        }
        if(nums[middle] < target){
            first = middle+1;
        }
        if(nums[middle] > target){
            last =middle-1;
        }
    }


return -1;
}

int main(){

vector<int> vec;
int gotIndex;
int n;
cin>>n;
///input should be sorted.
for(int i = 0 ; i<n; i++){
    int temp;
    cin>>temp;
    vec.push_back(temp);
}

int target;
cin>>target;



gotIndex = binarySearch(vec,target);
if(gotIndex!= -1){
    cout<<gotIndex<<endl;
}else{
    cout<<target<<" not found."<<endl;

 }

return 0;
}


