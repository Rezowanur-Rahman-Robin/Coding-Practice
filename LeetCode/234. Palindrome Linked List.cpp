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

    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        while(head){
            vec.push_back(head->val);
            head = head->next;
        }
        int l = 0 , r = vec.size()-1;
        while(l<=r){
            if(vec[l]!=vec[r])return false;
            l++;
            r--;
        }
        return true;
    }
};

int main(){

Solution s;


   insert(1);
   insert(2);
   insert(2);
   insert(1);


cout<<s.isPalindrome(hd)<<endl;

}
