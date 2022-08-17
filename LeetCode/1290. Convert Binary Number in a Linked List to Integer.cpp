

 #include<bits/stdc++.h>
 using namespace std;


 /// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };



void printLinkList(ListNode *&head){
   ListNode *temp = head;
   while(temp != NULL){
    cout<<temp->val<<"->";
    temp = temp->next;
   }
   cout<<"NULL";

}

class Solution {
public:

     void reverse(ListNode *&head)
    {
        // Initialize current, previous and next pointers
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;

        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }

    int getDecimalValue(ListNode* head) {
        reverse(head);
        long long decimal=0;
        int i = 0;

        while(head != nullptr){

            decimal += (head->val * pow(2,i));


            head = head->next;

            i++;
        }
        return decimal;

    }
};

ListNode* takeInput(){
    int input;
    cin>>input;
    ListNode *head = NULL; //LINK list is empty
    ListNode *tail = NULL; //LINK list is empty


    while(input!=-1){
            ///creating new node
        ListNode *n = new ListNode(input);
         ///for first node
        if(head == NULL){
          head = n;
          tail = n;
        }else{
          tail->next = n;
          tail = n;

        }
        cin>>input;
    }

    return head;

}

int main(){
  Solution s;
  ListNode *head ;
  head = takeInput();
  cout<<s.getDecimalValue(head)<<endl;

}
