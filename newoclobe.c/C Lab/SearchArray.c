#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} List;

void initializeList(List *list) {
    list->size = 0;
}

void insertElement(List *list, int element) {
    if (list->size < MAX_SIZE) {
        list->data[list->size] = element;
        list->size++;
        printf("Element %d inserted successfully.\n", element);
    } else {
        printf("Error: List is full. Cannot insert element %d.\n", element);
    }
}

int searchElement(List *list, int key) {
    for (int i = 0; i < list->size; i++) {
        if (list->data[i] == key) {
            return i; 
        }
    }
    return -1; 
}

void displayList(List *list) {
    printf("List elements: ");
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    List myList;
    initializeList(&myList);

    insertElement(&myList, 10);
    insertElement(&myList, 20);
    insertElement(&myList, 30);

    displayList(&myList);

    int searchKey = 20;
    int result = searchElement(&myList, searchKey);

    if (result != -1) {
        printf("Element %d found at index %d.\n", searchKey, result);
    } else {
        printf("Element %d not found in the list.\n", searchKey);
    }

    return 0;
}
