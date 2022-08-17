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

Node* insertAthIthNode(Node *head , int targetIndex){
    Node *temp = head;
    int value;
    cin>>value;

    Node *newNode = new Node(value);

    if(targetIndex<0){
        cout<<"Index should be positive."<<endl;
    }


    ///insert at first node

      if(targetIndex == 0){
        newNode->next = temp;
        temp = newNode;
      }else{
          int i=0;
        while(i<targetIndex-1 && temp != NULL){
             temp = temp->next;

            i++;
        }
        if(temp != NULL){
            ///insert at mid node
            newNode->next = temp->next;
            temp->next = newNode;

        }else{
            ///insert at last node;
            temp->next = newNode;
            temp = newNode;
        }
      }
      return head;
}

int main(){

Node *head ;
head = takeInputLinkList();
int index ;
cin>>index;
head = insertAthIthNode(head,index);
printTheLinkList(head);

return 0;
}

