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

// Function to delete a node with a given value from the linked list
void deleteNode(struct Node **head, int value) {
    struct Node *temp = *head;
    struct Node *prev = NULL;

    // If the node to be deleted is the head
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the node to be deleted, keeping track of the previous node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found
    if (temp == NULL) {
        printf("Node with value %d not found in the linked list.\n", value);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;

    // Free the memory of the deleted node
    free(temp);
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

    // Display the linked list before deletion
    displayList(head);

    // Delete a node with a specific value (e.g., 7)
    deleteNode(&head, 7);

    // Display the linked list after deletion
    displayList(head);

    return 0;
}
