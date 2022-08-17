#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
      int data;
      Node *next;

      Node(int data){
      this->data=data;
      next=NULL;
      }
};


void printLinkList_2(Node *head){
   Node *temp = head;
   while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
   }
   cout<<"NULL";
   cout<<endl;
   temp = head;
   while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
   }
   cout<<"NULL"<<endl;
}

void printLinkList(Node *head){
   while(head != NULL){
    cout<<head->data<<"->";
    head = head->next;
   }
   cout<<"NULL";
   cout<<endl;
   while(head != NULL){
    cout<<head->data<<"->";
    head = head->next;
   }
   cout<<"NULL"<<endl;
}

int main(){
///initialization
Node n1(10);
Node n2(11);
Node n3(12);
Node n4(13);
Node n5(14);

///connecting the nodes
n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;

///creating head;
Node *head=&n1;

cout<<"Head:"<< (*head).data<<endl;
cout<<"Head:"<< head->data<<endl;
/// head->data is equivalent (*head).data

///printing function
printLinkList(head);

///another printing function to print twice
printLinkList_2(head);

return 0;
}
