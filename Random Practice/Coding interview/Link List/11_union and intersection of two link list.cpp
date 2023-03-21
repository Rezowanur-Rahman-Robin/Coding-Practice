#include "LinkedList.h"

// union soultion

string LinkedList::Union(LinkedList list1, LinkedList list2) {
  //Return other List if one of them is empty
  if (list1.isEmpty())
    return list2.elements();
  else if (list2.isEmpty())
    return list1.elements();

  Node * start = list1.head; // starting from head of list 1

  //Traverse first list till the last element
  while (start->nextElement != nullptr) {
    start = start->nextElement;
  }

  //Link last element of first list to the first element of second list
  start->nextElement = list2.head; // appendinf list2 with list 1
  return list1.removeDuplicates(); // removing duplicates from list and return list
}

// intersection solution
string LinkedList::Intersection(LinkedList list1,
  LinkedList list2) {
  LinkedList list3;
  Node * t1 = list1.head, * t2 = list2.head;

  // Traverse both lists and store the same element
  // in the resultant list list3
  while (t1 != nullptr) {
    while (t2 != nullptr) {
      if (t1->data == t2->data)
        list3.insertAtHead(t1->data);
      t2 = t2->nextElement;
    }
    t2 = list2.head;
    t1 = t1->nextElement;
  }
  list3.removeDuplicates();
  return list3.elements();
}
