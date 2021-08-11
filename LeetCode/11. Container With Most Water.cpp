#include<bits/stdc++.h>
using namespace std;

static bool sortBySecond(const pair<int,int> &a, const pair<int,int> &b){
 return (a.second > b.second);
}

  int maxArea(vector<int>& height) {
        int i=0, j = height.size()-1;
        int water = 0;
        while(i<j) {
            water = max(water, (j-i)*min(height[i], height[j]));

            if(height[i] < height[j]) {
                i++;
            }

           else {
                j--;
            }
        }

        return water;

    }

int main(){
int n;
cin>>n;

vector<int> vec;

int temp;
for(int i=0;i<n;i++){
    cin>>temp;
    vec.push_back(temp);
}

cout<<maxArea(vec)<<endl;

}
