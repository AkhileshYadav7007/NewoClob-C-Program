#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void insertBeforeHead(struct Node** headRef, int newData) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = newData;

    newNode->next = *headRef;

    *headRef = newNode;
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

    insertBeforeHead(&head, 3);
    insertBeforeHead(&head, 8);
    insertBeforeHead(&head, 12);
    insertBeforeHead(&head, 14);
    insertBeforeHead(&head, 16);
    insertBeforeHead(&head, 19);

    printf("Linked List: ");
    printList(head);

    return 0;
}
