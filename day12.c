#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void deleteNode(Node** head, int key) {
    Node *temp = *head, *prev= NULL;

    if (temp != NULL && temp->data == key){
      *head = temp->next;
      free(temp);
      return;
    }

  while(temp!= NULL && temp->data != key){
    prev = temp;
    temp = temp->next;
  }

  if(temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL; 


    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printf("Linked List: ");
    printList(head);

    deleteNode(&head, 20);
    printf("Linked List after deleting 20: ");
    printList(head);

    return 0;
}