#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> nums){
  for(int i=0; i< nums.size();i++){
    cout<<nums.at(i)<<" ";
  }
  cout<<endl;
}

vector<int> bubbleSort(vector<int> nums){

    int length = nums.size();

for(int i = 0 ; i<length  ; i++){



    for(int j = 0; j<length-1 ; j++){

            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }

    }
}
return nums;
}

int main(){

vector<int> vec;
vector<int> ansVector;
int n;
cin>>n;

for(int i = 0 ; i<n; i++){
    int temp;
    cin>>temp;
    vec.push_back(temp);
}

///before sorting
printVector(vec);

ansVector = bubbleSort(vec);

///after sorting
printVector(ansVector);
return 0;
}

