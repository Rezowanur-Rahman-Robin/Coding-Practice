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

int lengthRecursion(Node *head){
    if(head == NULL){
        return 0;
    }
    return 1 + lengthRecursion(head->next);

}

int main(){

Node *head ;
head = takeInputLinkList();

cout<<"Length by recursive function:"<<lengthRecursion(head)<<endl;
return 0;
}
