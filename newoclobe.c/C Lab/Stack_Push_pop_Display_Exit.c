#include<stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = item;
        printf("Item pushed: %d\n", item);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Item popped: %d\n", stack[top--]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice,item;
    printf("1. Push\n 2.Pop\n 3.Display\n 4. Exit\n");
    while (1)
    {
        printf("choice : ");
        scanf("%d", & choice);

        switch (choice)
        {
        case 1:
        printf("Enter your value to Push : ");
        scanf("%d",& item);
        push(item);
            break;


            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:

            return 0;

        
        default:
            printf("Invalid choice !!\n");

            break;
        }
         
        
    }
    

  return 0;

}