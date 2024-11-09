#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node int(val) : data(val), next (nullptr){}
};
void countPositiveNegative(Node* head, int& positiveCount, int& negativeCount) {
    Node* current = head;
     while (current != nullptr) {
        if (current->data > 0) {
            positiveCount++;
        } else if (current->data < 0) {
            negativeCount++;
        }
    current = current->next;
     };
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

