#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> nums){
  for(int i=0; i< nums.size();i++){
    cout<<nums.at(i)<<" ";
  }
  cout<<endl;
}

vector<int> insertionSort(vector<int> nums){

    int length = nums.size();
    int assumeMin,assumeMinIndex;

for(int i = 0 ; i<length -1 ; i++){
    assumeMin = nums[i];
    assumeMinIndex = i;

    for(int j = i+1; j<length ; j++){

        if(nums[j]< assumeMin){
            assumeMin = nums[j];
            assumeMinIndex = j;
        }
    }
        int temp= nums[i];
        nums[i] = nums[assumeMinIndex];
        nums[assumeMinIndex] = temp;
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

ansVector = insertionSort(vec);

///after sorting
printVector(ansVector);


return 0;
}
