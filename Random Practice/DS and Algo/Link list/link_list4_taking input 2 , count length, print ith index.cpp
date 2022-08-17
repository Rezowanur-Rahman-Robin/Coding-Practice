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

Node * reverseInputLinkList(){
    int input;
    cin>>input;
    Node *head = NULL;
    Node *tail = NULL;

    while(input != -1){
        Node *newNode = new Node(input);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        cin>>input;
    }
    return head;

}

int lengthOfLinkList(Node *head){
 int counting = 0;
 while(head != NULL){
    counting ++;
    head = head->next;
 }
 return counting;
}

void printIthNode(Node *head,int targetIndex){
    int i = 0;
    if(targetIndex < 0 )
        cout<<"-1";

    while(head != NULL && i<targetIndex){
            head = head->next;
            i++;
    }
    if(head != NULL){
    cout<<"Value of targetIndex "<<targetIndex<<":"<<head->data<<endl;

    }else{
    cout<<"-1";

    }

}

int main(){

Node *head ;
head = takeInputLinkList();
///head = reverseInputLinkList();
///printTheLinkList(head);
///cout<<lengthOfLinkList(head)<<endl;
int index ;
cin>>index;
printIthNode(head,index);

return 0;
}
