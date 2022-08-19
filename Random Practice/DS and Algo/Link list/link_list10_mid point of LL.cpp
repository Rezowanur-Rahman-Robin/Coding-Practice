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

int lengthOfLinkList(Node *head){
 int counting = 0;
 Node *temp = head;
 while(temp != NULL){
    counting ++;
    temp = temp->next;
 }
 return counting;
}

int midPointLinkList(Node *head){
    int length = lengthOfLinkList(head);
    int midPointIndex = length/2;
    Node *temp = head;
    int counting = 0;
    ///if link list is empty
    if(temp==NULL){
        return -1;
    }
    while(temp != NULL && counting<midPointIndex){
        temp = temp->next;
        counting++;
    }
    if(temp != NULL){
        return temp->data;
    }
}


int midPointLinkListSlowFastPointer(Node *head){
    Node *slowPointer,*fastPointer;
    ///empty link list
    if(head == NULL){
        return -1;
    }
    slowPointer = head;
    fastPointer = head->next;
    while(fastPointer !=NULL ){

        slowPointer = slowPointer->next;
        if(fastPointer->next != NULL){
            fastPointer = fastPointer->next->next;
        }else{
            break;
        }

    }

        return slowPointer->data;

}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* slow = head;
         ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=NULL){  /// even
            return slow->next;
        }
        return slow;  /// odd
    }
};

int main(){

Node *head ;
head = takeInputLinkList();
cout<<midPointLinkListSlowFastPointer(head)<<endl;


return 0;
}


