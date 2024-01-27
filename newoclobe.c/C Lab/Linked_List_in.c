#include <stdio.h>
#include <stdlib.h>

// Node structure for a singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node before the head
void insertBeforeHead(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a new node after the tail
void insertAfterTail(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;

    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

// Function to insert a new node in a doubly linked list
void insertDoubly(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    newNode->prev = NULL;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}

// Function to delete a node from a singly linked list
void deleteNodeSingly(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Key not found in the list\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to delete a node from a doubly linked list
void deleteNodeDoubly(struct Node** head, int key) {
    struct Node* temp = *head;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Key not found in the list\n");
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Function to reverse a linked list using an iterative method
void reverseIterative(struct Node** head) {
    struct Node *prev = NULL, *current = *head, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to reverse a linked list using a recursive method
void reverseRecursive(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    struct Node* first = *head;
    struct Node* rest = first->next;

    reverseRecursive(&rest);

    first->next->next = first;
    first->next = NULL;

    *head = rest;
}

// Function to print a linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insertion
    insertBeforeHead(&head, 10);
    insertBeforeHead(&head, 20);
    insertAfterTail(&head, 30);
    insertDoubly(&head, 40);

    printf("Original linked list: ");
    printList(head);

    // Deletion
    deleteNodeSingly(&head, 20);
    printf("Linked list after deletion: ");
    printList(head);

    deleteNodeDoubly(&head, 30);
    printf("Doubly linked list after deletion: ");
    printList(head);

    // Reverse
    reverseIterative(&head);
    printf("Linked list after iterative reversal: ");
    printList(head);

    reverseRecursive(&head);
    printf("Linked list after recursive reversal: ");
    printList(head);

    return 0;
}
