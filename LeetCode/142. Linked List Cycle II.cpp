#include<bits/stdc++.h>
using namespace std;


class ListNode {
    public:
    int val;
    int index;
    ListNode* next;
    ListNode(){
    }
    ListNode(int x,int i){
      val = x;
      index = i;
      next = NULL;
    }
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return NULL;
        }
        ListNode* n=head;
        unordered_map<ListNode*,int> map;
        int index = 1;
        map[n]=index;
        index++;
        n=n->next;
        while(n){

            if(map[n]){
                return n;
            }
            map[n] = index;
            n=n->next;
            index++;
        }
        return NULL;
    }
};

int main(){

ListNode* n1=new ListNode(1,0);
ListNode* n2=new ListNode(2,1);
n1->next=n2;
n2->next=n1;

Solution s;

ListNode* res = s.detectCycle(n1);
if(res){
    cout<<res->index<<endl;
}


}




