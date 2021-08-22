#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int searchInsert(vector<int>& a, int t) {
    int l=0;
    int h=a.size()-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;

    cout<<a[mid]<<endl;
        if(a[mid]==t)
        {

            return mid;
        }
        else if(a[mid]>t)
        {


            h=mid-1;
        }
        else if(a[mid]<t)
        {
            l=mid+1;
        }
    }
    return l;
}

};

int main(){
int n;
cin>>n;
vector<int> vec;

for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    vec.push_back(temp);
}
int target;
cin>>target;

Solution sln;
cout<<sln.searchInsert(vec,target)<<endl;


return 0;
}
