
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
Node* mergeTwoLists(Node* a, Node* b) {
        if(a==NULL) return b;
        if(b==NULL) return a;

        Node* newHead = NULL;
        if(a->data < b->data){
            newHead = a;
            newHead ->next = mergeTwoLists(a->next, b);
        }else{
            newHead = b;
            newHead->next = mergeTwoLists(a,b->next);
        }

      return newHead;
    }

Node* mergeSort(Node *head){
       if(head==NULL || head->next==NULL) return head;
        /// break list into two
        Node *slow = head;
        Node *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *n = slow->next;
        slow->next = NULL;

        Node* a = mergeSort(head);
        Node* b = mergeSort(n);

        head = mergeTwoLists(a,b);
        return head;
}

int main(){

    Node* head;
    Node* head2;
    head = takeInputLinkList();
    printTheLinkList(mergeSort(head));


    return 0;
}



