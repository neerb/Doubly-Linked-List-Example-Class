#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

int main()
{
    DoublyLinkedList dll;

    dll.append(5);
    dll.append(10);
    dll.append(0);
    dll.append(20);
    dll.append(-5);
    dll.append(30);
    dll.append(25);
    dll.append(15);

    int option = 0;
    int newVal;

    while(option != -1)
    {
        cout << "0. Display the list." << endl;
        cout << "1. Append a number to the end of the list." << endl;
        cout << "2. Push a number to the front of the list (creates new root/head)." << endl;
        cout << "3. Pop from the end of the list." << endl;
        cout << "4. Search for a node in the list." << endl;
        cout << "5. Sort the list." << endl;
        cout << "6. Insert a node into the list." << endl;
        cout << "7. Delete a node from the list." << endl;
        cout << "8. Display list in reverse." << endl;
        cout << "Enter an option: ";

        cin >> option;

        switch(option)
        {
            case 0:
                dll.displayAllNodes();
                break;
            case 1:
                cout << "Enter a number: ";
                cin >> newVal;
                dll.append(newVal);
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> newVal;
                dll.push(newVal);
                break;
            case 3:
                dll.pop();
                cout << "Pop!" << endl;
                break;
            case 4:
                int searchedPos;
                cout << "Enter a number to search for it: ";
                cin >> newVal;
                searchedPos = dll.searchNode(newVal);

                if(searchedPos != -1)
                    cout << "Number found at index " << searchedPos << "." << endl;
                else
                    cout << "Number could not be found." << endl;
                break;
            case 5:
                dll.sortList();
                cout << "List sorted." << endl;
                break;
            case 6:
                break;
            case 7:
                int nodePos;
                int returnVal;
                cout << "Enter node position you wish to delete: ";
                cin >> nodePos;

                returnVal = dll.deleteNode(nodePos);

                if(returnVal != -1)
                    cout << "Node deleted." << endl;
                else
                    cout << "Error: node could not be deleted." << endl;

                break;
            case 8:
                dll.reverseTraverseDisplay();
                break;

            default:
                cout << "That is not a valid menu option." << endl;
                break;
        }
    }

    return 0;
}