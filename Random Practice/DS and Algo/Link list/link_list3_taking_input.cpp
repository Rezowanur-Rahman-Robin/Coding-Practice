#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node *next;

   Node(int data){
    this->data = data;
    next = NULL;
   }

};

void printLinkList(Node *&head){
   Node *temp = head;
   while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
   }
   cout<<"NULL";

}
Node* takeInput(){
    int input;
    cin>>input;
    Node *head = NULL; //LINK list is empty
    Node *tail = NULL; //LINK list is empty


    while(input!=-1){
            ///creating new node
        Node *n = new Node(input);
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

Node *head = takeInput();


printLinkList(head);

return 0;
}
