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

Node* removeNthNodeFromTheEnd(Node *head,int k){
   Node* one = head;
        Node* two = head;

        while(k--){ /// k times
            two = two->next;
        }
        if(two==NULL){   /// length of ll = k  => delete head node
            return one->next;
        }
        while(two->next!=NULL){
            one = one->next;
            two = two->next;
        }

        /// delete kth node from end
        one->next = one->next->next;      /// memory leak

        return head;

}

int main(){

    Node* head;
    head = takeInputLinkList();
    printTheLinkList(head);
    printTheLinkList(removeNthNodeFromTheEnd(head,2));


    return 0;
}

