#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node **head, int value) {
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

        // Add the new node at the end
        current->next = newNode;
    }
}

// Function to reverse the nodes in the linked list
void reverseList(struct Node **head) {
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *nextNode = NULL;

    while (current != NULL) {
        // Save the next node
        nextNode = current->next;

        // Reverse the link
        current->next = prev;

        // Move to the next nodes
        prev = current;
        current = nextNode;
    }

    // Update the head to point to the new start of the reversed list
    *head = prev;
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

    // Insert elements at the end of the linked list
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 7);
    insertAtEnd(&head, 12);

    // Display the linked list before reversal
    displayList(head);

    // Reverse the linked list
    reverseList(&head);

    // Display the linked list after reversal
    displayList(head);

    return 0;
}
