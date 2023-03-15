#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<string> result;

cout<<createArrayWithSingleElement(15)<<endl;

for(int i=1;i<=n;i++){
    char c = char(i);
    if(i%3==0 && i%5==0){
      result.push_back("Airwrk");
    }else if(i%3==0 ){
      result.push_back("Air");
    }else if( i%5==0){
      result.push_back("wrk");
    }else{
      result.push_back(to_string(i));
    }
}
for(int i=1;i<=n;i++){
   cout<<result[i]<<endl;
}

}

