#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


void insertNode(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;

    
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        printf("Node with data %d deleted successfully.\n", key);
        return;
    }

    
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    
    if (temp == NULL) {
        printf("Node with data %d not found in the linked list.\n", key);
        return;
    }

    
    prev->next = temp->next;
    free(temp);

    printf("Node with data %d deleted successfully.\n", key);
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;

   
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);

    
    printf("Original Linked List: ");
    printList(head);

    
    deleteNode(&head, 2);

    
    printf("Updated Linked List: ");
    printList(head);

    return 0;
}
