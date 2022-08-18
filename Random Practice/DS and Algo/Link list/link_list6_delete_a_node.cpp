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
///without memory leak
Node* deleteithNode(Node* head, int i){
   if(i<0){
      return head;
   }
   if(i==0 && head){
    Node* newHead = head->next;
    head->next = NULL;
    delete head;
    return newHead;
   }

   Node* curr = head;
   int count = 1;
   while(count<=i-1 && curr!=NULL){
    curr = curr->next;
    count++;
   }
   if(curr && curr->next){
     Node *temp = curr->next;
     curr->next = curr->next->next;
     temp->next=NULL;
     delete temp;
     return head;
   }
   return head;
}

Node* deleteAtIthNode(Node *head , int targetIndex){



    if(targetIndex<0){
        cout<<"Index should be positive."<<endl;
    }


    ///delete at first node

      if(targetIndex == 0){
         head = head->next;
      }else{
          int i=0;
          Node *temp = head;
        while(i<targetIndex-1 && temp != NULL){

             temp = temp->next;

            i++;
        }
        if(temp != NULL && temp->next !=NULL){
            ///delete at mid node
            temp->next = ((temp->next)->next);

        }else{
            ///delete at last node
            temp->next = NULL;
        }
      }
      return head;
}

int main(){

Node *head ;
head = takeInputLinkList();
int index ;
cin>>index;
head = deleteAtIthNode(head,index);
printTheLinkList(head);

return 0;
}

