//inserting a node in doubly linked list

#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        } else 
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    
    void display()
     {
        Node* current = head;
        while (current != nullptr)
         {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList myList;
    myList.insertAtEnd(120);
    myList.insertAtEnd(10);
    myList.insertAtEnd(30);
    
    myList.display();

    return 0;
}
