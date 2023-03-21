#include "LinkedList.h"

//To Find nth node from end of list
int LinkedList::findNth(int n) {

  if (isEmpty()) // if list is empty return -1
    return -1;
  // This pointer will reach the nth node
  Node * nth_node = head;
  // This pointer will reach the end node
  Node * end_node = head;

  int count = 0;

  while (count < n) {
    if (end_node == nullptr){
      return -1;
    }
    end_node = end_node->nextElement;
    count++;
  }

  while (end_node != NULL){
    end_node = end_node->nextElement;
    nth_node = nth_node->nextElement;
  }
  if (nth_node != nullptr){
    return nth_node->data;
  }
  return -1;
}

int main() {
    LinkedList list;    //creating list
    for(int j=0; j<=7; j++) {
        list.insertAtHead(j);      //insertng data in list
        list.printList();
    }
    int num = 5;
    int nth = list.findNth(num); // calling findNth function of the list
    cout << num << "th element from end of the list : " << nth << endl;
    return 0;
}
