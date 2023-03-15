#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> vec = {0,1,0,3,12};
int n=vec.size();
int k=0;
for(int i=0;i<n;i++){
    if(vec[i]==0){
        for(int j=i;j<n-1;j++){
        int temp = vec[j];
        vec[j] = vec[j+1];
        vec[j+1] = temp;
       }
    }
}

for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<endl;
}


}
