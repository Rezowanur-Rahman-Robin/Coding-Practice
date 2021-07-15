#include<bits/stdc++.h>
using namespace std;

bool sortLogic(const pair<int ,int > &a,const pair<int,int> &b){

return a.first<b.first;

}

int main(){

    int s,n,i,j;
    cin>>s>>n;
    vector <pair<int,int> > vec;


    for(i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));//By default it will sort asending with respect to the first element.

    }
    int vec_length=vec.size();

    sort(vec.begin(),vec.end());

    for(i=0;i<vec_length;i++){
    if(s> vec[i].first){
        s+=vec[i].second;
    }
    else{
        cout<<"NO"<<endl;
        break;
    }
    }
    if(i==vec_length){
        cout<<"YES"<<endl;
    }


}
