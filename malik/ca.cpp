#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* createNode(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void push(Node** head, int data) {
  Node* newNode = createNode(data);
  newNode->next = *head;
  *head = newNode;
}

int countPositive(Node* head) {
  int count = 0;
  Node* current = head;
  while (current != NULL) {
    if (current->data >= 0) {
      count++;
    }
    current = current->next;
  }
  return count;
}

int countNegative(Node* head) {
  int count = 0;
  Node* current = head;
  while (current != NULL) {
    if (current->data < 0) {
      count++;
    }
    current = current->next;
  }
  return count;
}

int main() {
  Node* head = NULL;
  push(&head, 1);
  push(&head, -2);
  push(&head, 3);
  push(&head, -4);
  push(&head, 5);

  int positiveCount = countPositive(head);
  int negativeCount = countNegative(head);

  cout << "Number of positive numbers: " << positiveCount << endl;
  cout << "Number of negative numbers: " << negativeCount << endl;

  return 0;
}
