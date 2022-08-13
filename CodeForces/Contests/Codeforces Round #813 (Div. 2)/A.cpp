#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

while(n--){
    int n,k,counter=0;;
    cin>>n>>k;
    vector<int> vec;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec.push_back(temp);
    }

    vector<int>vec2;
    vec2=vec;



    sort(vec2.begin(),vec2.end());

    for(int i=0;i<k;i++){
        if(!count(vec.begin(),vec.begin()+k,vec2[i])){
            counter++;
        }
    }
    cout<<counter<<endl;


}


return 0;
}
