class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() {      // Doubly linkedlist constructor
        head=nullptr;
    }
    bool isEmpty() {      // check if the list is empty
        if(head == nullptr) //Check whether the head points to null
            return true;
        else
            return false;
    }

    Node * getHead(){
      return head;
    }

    bool printList() {    // printing all elements of the list
        if (isEmpty()) {
            cout << "List is Empty!" << endl;
            return false;
        }
        Node *temp = head;   // temp points to head of the list
        cout << "List : ";

        while (temp != nullptr) {    // traverse through the list
            cout << temp->data << "->"  ;
            temp = temp->nextElement;
        }
        cout  << "null " << endl;
        return true;
    }

    bool insertAtHead(int value) {    // insert value at head
        Node * newNode = new Node();
        newNode->data = value;
        newNode->previousElement = nullptr;
        newNode->nextElement = head; //Linking newNode to head's nextNode
        if (head != nullptr) {
            head->previousElement = newNode;
        }
        //move the head to point to the new node
        head = newNode;
        cout << value << " Inserted!    " ;
    }

    bool deleteAtHead() {
        bool deleted = false;
        if (isEmpty()) {
            cout << "List is Empty" << endl;
            return deleted;
        }
        head = head->nextElement;    // pointing head to head's nextElement
        head->previousElement = nullptr;
      return true;
    }

    bool Delete(int value)
    {
        bool deleted = false;
        if (isEmpty()) {
            cout << "List is Empty" << endl;
            return deleted;
        }

        //if list is not empty, start traversing it from the head
        Node * currentNode = head;

        if(currentNode->data == value) {    // deleting value of head
            cout << value << " deleted!" << endl;
            deleted = deleteAtHead();
            return deleted;
        }

        //Traversing/Searching for Node to Delete
        while (currentNode != nullptr) {

            //Node to delete is found
            if (currentNode->data == value) {
                // pointing current's previous next to current's next
                currentNode->previousElement->nextElement = currentNode->nextElement;

                if(currentNode->nextElement != nullptr)
                    // pointing current's next previous to current's next
                    currentNode->nextElement->previousElement = currentNode->previousElement;

                cout << value << " deleted!" << endl;

                deleted = true;
                return deleted;
            }
            // pointing current to current's next
            currentNode = currentNode->nextElement;
        }

        if (deleted == false) {
            cout << value << " does not exist!" << endl;
        }
        return deleted;
    }//end of delete()
};

int main() {
    DoublyLinkedList list;
    for(int i=1; i<=5; i++) {
        list.insertAtHead(i);      // inserting data in list
        list.printList();
    }

    list.Delete(1);    // deleting 1 from the list
    list.printList();

    list.Delete(5);    // deleting 5 from the list
    list.printList();

    list.Delete(3);    // deleting 3 from the list
    list.printList();

    list.Delete(12);
    list.printList();
    return 0;
}
