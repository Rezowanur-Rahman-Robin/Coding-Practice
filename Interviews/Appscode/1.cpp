#include<bits/stdc++.h>
using namespace std;

void printMsgList(stack<string> msgStack,unordered_map<string,int> msgStore){
    while(!msgStack.empty()){
        string current = msgStack.top();
        msgStack.pop();
        cout<<current<<" : "<<msgStore[current]<<endl;
    }
    cout<<endl;

}
stack<string> removeDuplicateFromStackAndInsert(stack<string> msgStack,string str){
stack<string> temp;
stack<string> newStack;
while(!msgStack.empty()){
    string current = msgStack.top();
    msgStack.pop();
    if(current != str){
        temp.push(current);
    }
}

while(!temp.empty()){
    string current = temp.top();
    temp.pop();
    newStack.push(current);
}
newStack.push(str);
return newStack;
}

void insertNewMsg(stack<string> &msgStack,unordered_map<string,int> &msgStore,string s){
if(msgStore[s]){
         msgStack =removeDuplicateFromStackAndInsert(msgStack,s);


    }else{
     msgStack.push(s);
    }

    msgStore[s]++;
    printMsgList(msgStack,msgStore);
}

int main(){
unordered_map<string,int> msgStore;
stack<string> msgStack;
vector<string> str= {"robin","hasan","robin","hasan","nahid","abdullah","sakib"};
for(s : str){
    insertNewMsg(msgStack,msgStore,s);
}

insertNewMsg(msgStack,msgStore,"robin");

insertNewMsg(msgStack,msgStore,"hasan");

insertNewMsg(msgStack,msgStore,"nahid");

return 0;
}
