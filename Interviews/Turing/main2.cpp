#include<bits/stdc++.h>
using namespace std;

int main()
{
string str;
vector<pair<int,int>> res;

cin>>str;

for(int i=0;i<str.length();i++){
    int j=i+1;
    bool found = true;
    while(found){
        if(str[j]==str[i]){
            j++;
        }else{
            found = false;
        }
    }
    if(j-i>=3){
        res.push_back(make_pair(i,j-1));
    }
    i=j;
}

  for (int i = 0; i < res.size(); i++) {
    //cout << res[i].first << "  " << res[i].second  << endl;
    cout<<str.substr(res[i].first,res[i].second-res[i].first+1)<<endl;
  }


}
