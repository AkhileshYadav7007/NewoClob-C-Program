#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node before the linked list
void insertBefore(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Function to display the elements of the linked list
void displayList(struct Node *head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL; // Initialize an empty linked list

    // Insert elements before the linked list
    insertBefore(&head, 3);
    insertBefore(&head, 7);
    insertBefore(&head, 12);

    // Display the linked list
    displayList(head);

    return 0;
}
