#include<bits/stdc++.h>
using namespace std;

void printStore(vector<vector<string>> &store){
 for(str:store){
    for(s:str){
        cout<<s<<" ";
    }
    cout<<endl;
 }

}

bool checkStoreInBranch(vector<vector<string>> &store,int n,string str){
 for(int i=0;i<store[n].size();i++){
    if(store[n][i]==str) return true;
 }
 return false;
}

void getPush(vector<vector<string>> &store){
   vector<string> currentCommit;
   string str;
   do{
    cin>>str;
    currentCommit.push_back(str);
   }while(str!="0");
   currentCommit.pop_back();
int latestCommit = store.size()-1;
   if(latestCommit>-1){
    if(store[latestCommit]!=currentCommit){
        store.push_back(currentCommit);
    }
   }else{
     store.push_back(currentCommit);
   }
}

int main(){

vector<vector<string>> store;
getPush(store);
getPush(store);
getPush(store);
printStore(store);

if(checkStoreInBranch(store,1,"a")){
    cout<<"a found in branch "<<1<<endl;
}else{
    cout<<"a is not found in branch "<<1<<endl;
}



return 0;
}
