#include<bits/stdc++.h>
using namespace std;

void printMsgList(stack<string> msgStack,unordered_map<string,int> msgStore){
    unordered_map<string,int>tempStore;
    cout<<endl;
    while(!msgStack.empty()){
        string current = msgStack.top();
        msgStack.pop();
        if(tempStore[current]==0){
            cout<<current<<" "<<msgStore[current]<<endl;
            tempStore[current]++;
        }
    }
    cout<<endl;

}

void insertNewMsg(stack<string> &msgStack,unordered_map<string,int> &msgStore,string s){

    msgStack.push(s);

    msgStore[s]++;
    printMsgList(msgStack,msgStore);
}

int main(){
unordered_map<string,int> msgStore;
stack<string> msgStack;
string msg;
while(1){
    cin>>msg;
    insertNewMsg(msgStack,msgStore,msg);
}

return 0;
}
