#include <stdio.h>

#define MAX_SIZE 100

// Define the List ADT
typedef struct {
    int array[MAX_SIZE];
    int size;
} List;

// Function to initialize the list
void initializeList(List *list) {
    list->size = 0;
}

// Function to insert an element at a given position
void insertElement(List *list, int position, int value) {
    // Check if the position is valid
    if (position < 0 || position > list->size || list->size == MAX_SIZE) {
        printf("Invalid position or list is full\n");
        return;
    }

    // Shift elements to make space for the new element
    for (int i = list->size; i > position; --i) {
        list->array[i] = list->array[i - 1];
    }

    // Insert the new element
    list->array[position] = value;

    // Increment the size of the list
    list->size++;
}

// Function to display the elements of the list
void displayList(List *list) {
    printf("List elements: ");
    for (int i = 0; i < list->size; ++i) {
        printf("%d ", list->array[i]);
    }
    printf("\n");
}

int main() {
    List myList;

    // Initialize the list
    initializeList(&myList);

    // Insert elements at various positions
    insertElement(&myList, 0, 10);
    insertElement(&myList, 1, 30);
    insertElement(&myList, 1, 20);

    // Display the list
    displayList(&myList);

    return 0;
}
