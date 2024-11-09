#include <iostream>
using namespace std;

// Define a structure for a linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to count positive and negative numbers
void countPositiveNegative(Node* head, int& positiveCount, int& negativeCount) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data > 0) {
            positiveCount++;
        } else if (current->data < 0) {
            negativeCount++;
        }

        current = current->next;
    }
}

// Function to insert a new node at the end of the linked list
void insertNode(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

// Function to delete the linked list to free memory
void deleteLinkedList(Node* head) {
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

int main() {
    Node* head = nullptr;
    int positiveCount = 0, negativeCount = 0;

    // Insert elements into the linked list
    insertNode(head, 5);
    insertNode(head, -3);
    insertNode(head, 8);
    insertNode(head, -2);
    insertNode(head, 0);

    // Print the linked list
    cout << "Linked List: ";
    printLinkedList(head);

    // Count positive and negative numbers
    countPositiveNegative(head, positiveCount, negativeCount);

    // Output the counts
    cout << "Positive Count: " << positiveCount << endl;
    cout << "Negative Count: " << negativeCount << endl;

    // Delete the linked list to free memory
    deleteLinkedList(head);

    return 0;
}

}