#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node *next ;

   Node(int data){
    this->data = data;
   }
};
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
void printTheLinkList(Node *head){
   Node *temp = head;
   while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;

   }
   cout<<"NULL\n"<<endl;
}


Node* takeInputLinkList(){
    int input ;
    cin>>input;
    Node *head=NULL;
    Node *tail=NULL;

    while(input != -1){
        Node *newNode = new Node(input);
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

Node* mergeTwoSortedList(Node *l1, Node *l2){
   if(l1 == NULL) return l2;
   if(l2 == NULL) return l1;
   Node *finalHead = NULL;
   if(l1->data<l2->data){
    finalHead = l1;
    l1 = l1->next;
   }else{
    finalHead = l2;
    l2 = l2->next;
   }
   Node *finalTail = finalHead;
   while(l1!=NULL && l2!=NULL){
    if(l1->data<l2->data){
        finalTail->next = l1;
        l1 = l1->next;
    }else{
        finalTail->next = l2;
        l2 = l2->next;
    }
    finalTail = finalTail->next;
   }
   if(l1 != NULL){
    finalTail->next = l1;
   }else{
    finalTail->next = l2;
   }
return finalHead;
}

int main(){

    Node* head;
    Node* head2;
    head = takeInputLinkList();
    head2 = takeInputLinkList();
    printTheLinkList(mergeTwoSortedList(head,head2));


    return 0;
}


