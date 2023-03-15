#include<bits/stdc++.h>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
struct ListNode* hd = NULL;
void insert(int new_data) {
   struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode));
   new_node->val = new_data;
   new_node->next = hd;
   hd = new_node;
}


class Solution {
public:
    int getLength(ListNode* head){
        ListNode* t=head;
        int cnt = 0;
        while(t){
          cnt++;
          t=t->next;
        }
        return cnt;
    }
    ListNode* getHalf(ListNode* head,int z){
        int i=0;
        ListNode* t = head;
        while(i<(z/2)){
            if(i==(z/2)-1){
                ListNode* p;
                p=t;
                t->next = NULL;
                return p;
            }
            t=t->next;
            i++;
        }

        return t;

    }
    int pairSum(ListNode* head) {
        int size = getLength(head);
        ListNode* half = getHalf(head,size);
        //cout<<size<<endl;
        cout<<head->val<<endl;
        int max=-999;
        while(head && half){
                cout<<head->val<<" "<<half->val<<endl;
            max = (head->val + half->val)>max? (head->val + half->val) : max;
            head=head->next;
            half=half->next;
        }
        return max;

    }
};

int main(){

Solution s;


   insert(5);
   insert(4);
   insert(2);
   insert(1);


cout<<s.pairSum(hd)<<endl;

}

