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

Node* reverseLinkList(Node* head, int left, int right){
   Node *current = head;
   Node *previous = NULL;
        int counting =1;
   while(current!=NULL){
       if(counting>=left && counting<=right){
           Node *n = current->next;
    current->next = previous;
    previous = current;
    current = n;
       }
       counting++;
   }
   return previous;

}

int main(){

    Node* head;
    head = takeInputLinkList();
    printTheLinkList(head);
    printTheLinkList(reverseLinkList(head,2,4));


    return 0;
}
