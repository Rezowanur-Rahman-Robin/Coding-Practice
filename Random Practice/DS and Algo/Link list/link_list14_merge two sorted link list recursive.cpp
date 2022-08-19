
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

Node* mergeTwoSortedList(Node *a, Node *b){
        if(a==NULL) return b;
        if(b==NULL) return a;

        Node* newHead = NULL;
        if(a->data < b->data){
            newHead = a;
            newHead ->next = mergeTwoSortedList(a->next, b);
        }else{
            newHead = b;
            newHead->next = mergeTwoSortedList(a,b->next);
        }

        return newHead;
}

int main(){

    Node* head;
    Node* head2;
    head = takeInputLinkList();
    head2 = takeInputLinkList();
    printTheLinkList(mergeTwoSortedList(head,head2));


    return 0;
}


