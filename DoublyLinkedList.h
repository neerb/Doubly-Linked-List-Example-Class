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
    Node *head = nullptr;
    Node *end = nullptr;


public:
    DoublyLinkedList();
    DoublyLinkedList(int initialNum);
    void append(int num);
    void push(int num);
    void pop();
    int deleteNode(int pos);
    int searchNode(int searchVal);
    void sortList();
    void displayAllNodes();
    void reverseTraverseDisplay();
};


#endif //DOUBLYLINKEDLISTCLASS_DOUBLYLINKEDLIST_H
