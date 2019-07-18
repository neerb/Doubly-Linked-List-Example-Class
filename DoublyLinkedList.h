#ifndef DOUBLYLINKEDLISTCLASS_DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLISTCLASS_DOUBLYLINKEDLIST_H

class DoublyLinkedList
{
    struct Node
    {
        Node *left = nullptr;
        Node *right = nullptr;
        int val;
    };

private:
    //Beginning of list pointer
    Node *head = nullptr;
    //End of list pointer
    Node *end = nullptr;

public:
    //Constructors
    DoublyLinkedList();
    DoublyLinkedList(int initialNum);

    //Linked List Methods and Operations
    void append(int num);
    void push(int num);
    void pop();
    int deleteNode(int pos);
    int searchNode(int searchVal);
    void sortList();
    void displayAllNodes();
    void reverseTraverseDisplay();

    //Destructor
    ~DoublyLinkedList();
};


#endif //DOUBLYLINKEDLISTCLASS_DOUBLYLINKEDLIST_H
