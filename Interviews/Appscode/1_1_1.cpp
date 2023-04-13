#include<bits/stdc++.h>
using namespace std;

const int MAXN = 10005;

void printMsgList(stack<string> msgStack,int *msgStore){

int freq[MAXN]={0};
    cout<<endl;
    while(!msgStack.empty()){
        string current = msgStack.top();
        msgStack.pop();

        if(freq[hash<string>()(current) % MAXN] == 0){
            cout<<current<<" "<<msgStore[hash<string>()(current) % MAXN]<<endl;
            freq[hash<string>()(current) % MAXN]++;

        }
    }
    cout<<endl;

}

void insertNewMsg(stack<string> &msgStack,int *msgStore,string s){

    msgStack.push(s);


    msgStore[hash<string>()(s) % MAXN]++;
    printMsgList(msgStack,msgStore);
}

int main(){

int msgStore[MAXN]={0};
stack<string> msgStack;
string msg;
while(1){
    cin>>msg;
    insertNewMsg(msgStack,msgStore,msg);
}

return 0;
}

