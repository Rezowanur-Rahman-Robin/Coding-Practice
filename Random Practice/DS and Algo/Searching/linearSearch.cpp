#include<bits/stdc++.h>
using namespace std;


int linearSearch(vector<int> nums,int target){

    int length = nums.size();

for(int i = 0 ; i<length  ; i++){
    if(nums[i]==target ){
        return i;
    }

}
return -1;
}

int main(){

vector<int> vec;
int gotIndex;
int n;
cin>>n;

for(int i = 0 ; i<n; i++){
    int temp;
    cin>>temp;
    vec.push_back(temp);
}

int target;
cin>>target;

gotIndex = linearSearch(vec,target);
if(gotIndex!= -1){
    cout<<gotIndex<<endl;
}else{
    cout<<target<<" not found."<<endl;

 }

return 0;
}

