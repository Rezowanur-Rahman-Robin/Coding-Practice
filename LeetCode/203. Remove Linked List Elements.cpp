#include<bits/stdc++.h>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
void printTheLinkList(ListNode *head){
   ListNode *temp = head;
   while(temp != NULL){
    cout<<temp->val<<"->";
    temp = temp->next;

   }
   cout<<"NULL\n"<<endl;
}


ListNode* takeInputLinkList(){
    int input ;
    cin>>input;
    ListNode *head=NULL;
    ListNode *tail=NULL;

    while(input != -1){
        ListNode *newNode = new ListNode(input);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{


            tail->next = newNode;
            tail = newNode;


        }
        cin>>input;
    }
    return head ;
}



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        if(head->val == val) head = removeElements(head->next, val);
        else head->next = removeElements(head->next, val);
        return head;
    }
};

int main(){

ListNode *head ;
head = takeInputLinkList();
int removeItem;
cin>>removeItem;
Solution s;
printTheLinkList(s.removeElements(head,removeItem));


return 0;
}



