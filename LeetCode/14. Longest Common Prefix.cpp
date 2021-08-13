#include<bits/stdc++.h>
using namespace std;

  string longestCommonPrefix(vector<string>& strs){
        int n =strs.size();
        string ans;
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n-1];
        for(int i =0; i< a.size(); i++){
            if(a[i] == b[i]){
                ans += a[i];
            }else break;
        }
        return ans;
    }

int main(){

vector<string> strs;
int n;
cin>>n;
string demo;
for(int i=0;i<n;i++){
    cin>>demo;
    strs.push_back(demo);
}
cout<<longestCommonPrefix(strs)<<endl;



return 0;
}
