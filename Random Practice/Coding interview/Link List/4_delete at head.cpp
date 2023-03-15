#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int val;
    Node* next;
    Node(){
    next = NULL;
    }

    Node(int data){
    val=data;
    next = NULL;
    }
};

class LinkList{

public:
Node* head;
LinkList(){
    head = NULL;
}



bool isEmpty(){
 return head==NULL;
}

void printList(){
  Node* n = head;
  while(n){
    cout<<n->val<<" ";
    n=n->next;
  }
  cout<<endl;
}

void insertInTail(int p){

if(head==NULL){
Node* temp=new Node();
temp->val= p;
temp->next = head;
head = temp;
}else{
 Node* n = head;
  while(n){
    if(n->next == NULL){
        Node* temp=new Node();
        temp->val= p;
        n->next = temp;
        n= temp;

    }
       n=n->next;
  }
}

}

bool searchInLinkList(int value){
Node* n = head;
while(n){
    if(n->val == value){
        return true;
    }
    n=n->next;
  }
  return false;
}

void deleteAtHead(){
 if(!head){
   cout<<"No data found"<<endl;
 }else{
 Node* n = new Node();
 n = head->next;
 head = n;
 }

}


}

};



int main(){

LinkList L;

L.insertInTail(2);
L.insertInTail(1);
L.insertInTail(-9);
L.insertInTail(5);
L.insertInTail(25);
L.deleteAtHead();
L.printList();


}



