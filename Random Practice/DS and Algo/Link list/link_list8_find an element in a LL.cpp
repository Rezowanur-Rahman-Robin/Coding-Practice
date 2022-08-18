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

bool findElement(Node *head, int targetData){
    Node *temp = head;
    while(temp != NULL){
        if( temp->data == targetData){
            return true;
        }
        temp = temp->next;

    }
    return false;

}

int main(){

Node *head ;
head = takeInputLinkList();
int item;
cin>>item;

if(findElement(head,item)){
    cout<<"Found!"<<endl;
}else{
    cout<<"Not found!"<<endl;
}
return 0;
}

