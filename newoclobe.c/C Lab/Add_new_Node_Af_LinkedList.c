#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node after the tail of the linked list
void insertAfterTail(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        // If the list is empty, the new node becomes the head
        *head = newNode;
    } else {
        // Traverse to the end of the list to find the tail
        struct Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Add the new node after the tail
        current->next = newNode;
    }
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

    // Insert elements after the tail of the linked list
    insertAfterTail(&head, 3);
    insertAfterTail(&head, 7);
    insertAfterTail(&head, 12);

    // Display the linked list
    displayList(head);

    return 0;
}
