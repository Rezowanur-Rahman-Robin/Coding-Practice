

 #include<bits/stdc++.h>
 using namespace std;




  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  void printLinkList(ListNode *head ){
      while(head != NULL){
        cout<<head->val<<"->";
        head = head->next;
      }
      cout<<"NULL"<<endl;
  }

  ListNode* inputALinkList(){
    int input ;
    cin>>input;
    ListNode *head=NULL , *tail=NULL;
    while(input != -1 ){
            ListNode *node = new ListNode(input);
        if(head == NULL){
            head = node;
            tail = node;
        }else {
            tail->next = node;
            tail = node;
        }
        cin>>input;
    }
    return head;
  }

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *headL1 = l1;
        ListNode *headL2 = l2;

        int carry=0;
        int sum ;
        ListNode *head=NULL , *tail=NULL;
        while(headL1 !=NULL || headL2 !=NULL){
                //cout<<"head1:"<<headL1->val<<endl;
                //cout<<"head2:"<<headL2->val<<endl;

            if(headL1 == NULL){
                sum = 0 + headL2->val + carry;
            }else if(headL2 == NULL){
                sum = headL1->val + 0 + carry;
                cout<<"sum:"<<sum<<endl;
            }else{
               sum = headL1->val + headL2->val+carry;
            }
            carry = sum / 10;
            sum = sum % 10 ;


            ListNode *newNode = new ListNode(sum);
            if(head ==NULL){
                head = newNode;
                tail = newNode;
            }else {
                tail->next = newNode;
                tail = newNode;
            }

            if(headL1 != NULL){
                headL1 = headL1->next;
            }
            if(headL2 != NULL){
                headL2 = headL2->next;

            }

        }

        if(carry){
           ListNode *newNode = new ListNode(carry);
           tail->next = newNode;
           tail = newNode;
        }

        return head;


    }
};

int main(){

ListNode   *head1 = inputALinkList();
ListNode   *head2 = inputALinkList();
Solution s;

printLinkList(head1);
printLinkList(head2);
ListNode   *ansHead = s.addTwoNumbers(head1,head2);
printLinkList(ansHead);
return 0;
}

/*

2 4 3 -1
5 6 4 -1



9 9 9 9 9 9 9 -1
9 9 9 9 -1

*/
