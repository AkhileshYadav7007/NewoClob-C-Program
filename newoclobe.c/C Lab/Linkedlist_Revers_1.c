#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* reverse(struct Node* head) {
    struct Node *prev, *current, *next;
    prev = NULL;
    current = head;

    while (current != NULL) {
        next = current->next; 
        current->next = prev;  
        prev = current;        
        current = next;      
    }

    head = prev; 
    return head;
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}

int main() {
    
    struct Node* head = NULL;
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 4);
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    printf("Original linked list: ");
    printList(head);

    // Reverse the linked list
    head = reverse(head);

    printf("Reversed linked list: ");
    printList(head);

    return 0;
}
