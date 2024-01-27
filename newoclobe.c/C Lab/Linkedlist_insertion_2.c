#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

void insertion(struct Node** head, int newData) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    
    newNode->data = newData;
    newNode->next = NULL;

    
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    
    last->next = newNode;
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


int main() {
    struct Node* head = NULL; 

    
    insertion(&head, 1);
    insertion(&head, 2);
    insertion(&head, 3);

    
    printf("Linked List: ");
    printList(head);

    return 0;
}
