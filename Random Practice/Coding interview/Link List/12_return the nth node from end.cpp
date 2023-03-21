#include "LinkedList.h"

//To Find nth node from end of list
int LinkedList::findNth(int n) {

  if (isEmpty()) // if list is empty return -1
    return -1;

  int length = 0;
  Node * currentNode = head; // pointing to head of the list

  // finding the length of the list
  while (currentNode != nullptr) {
    currentNode = currentNode->nextElement;
    length++;
  }

  //Find the Node which is at (len - n) position from start
  currentNode = head;
  int position = length - n;

  if (position < 0 || position > length) // check if out of the range of the list
    return -1;

  int count = 0;
  // traversing till the nth Element of the list
  while (count != position) { // finding the position of the element
    currentNode = currentNode->nextElement;
    count++;
  }

  if (currentNode != nullptr) // if node exists
    return currentNode->data;

  return -1;
}
