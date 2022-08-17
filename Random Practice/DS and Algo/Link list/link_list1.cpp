#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};

int main(){

    ///Statically
    Node n1(20);
    Node n2 (30);

    n1.next = &n2;

    ///Dynamically
    Node *n3 = new Node(12);
    Node *n4 = new Node(13);



    cout<< n1.data<<" "<<n2.data<<endl;

    cout<< n3->data<<" "<<n4->data<<endl;

    /*
    Node *head = &n1;

    head->data is same as (*head).data

    */
return 0;}
