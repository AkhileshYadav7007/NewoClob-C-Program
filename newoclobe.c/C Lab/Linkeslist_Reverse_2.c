#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// Function to reverse the linked list using recursion
struct Node* reverse(struct Node* head) {
    // Base case: an empty list or a list with only one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive case: reverse the rest of the list
    struct Node* restReversed = reverse(head->next);

    // Adjustments for the current node
    head->next->next = head;
    head->next = NULL;

    return restReversed;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function to test the linked list and reverse function
int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct Node* head = NULL;
    head = insert(head, 5);
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 2);
    head = insert(head, 1);

    printf("Original Linked List: ");
    printList(head);

    // Reverse the linked list using recursion
    head = reverse(head);

    printf("Reversed Linked List: ");
    printList(head);

    return 0;
}
