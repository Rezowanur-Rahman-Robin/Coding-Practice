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

void insertInHead(int p){
Node* temp=new Node();
temp->val= p;
temp->next = head;
head = temp;

}

};

int main(){

LinkList L;

L.insertInHead(2);
L.insertInHead(1);
L.insertInHead(-9);
L.insertInHead(5);
L.insertInHead(25);
L.printList();

}
