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
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return NULL;

        ListNode *ptr1=head;
        ListNode *ptr2=head->next;

        while(ptr2!=NULL)
        {
            ptr2=ptr2->next;
            if(ptr2!=NULL)
            {
            ptr2=ptr2->next;
            }
            ptr1=ptr1->next;
        }

        ListNode *ptr=head;
        while(ptr->next !=ptr1)
        {
            ptr=ptr->next;
        }
        ptr->next=ptr1->next;
        delete(ptr1);

        return head;
    }
};

int main(){

ListNode *head ;
head = takeInputLinkList();
Solution s;
printTheLinkList(s.deleteMiddle(head));


return 0;
}



