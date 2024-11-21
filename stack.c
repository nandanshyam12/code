#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = value;
        printf("%d has been pushed onto the stack.\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top];
    }
}

int main() {
    int choice, value;

    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1) {
                    printf("Popped: %d\n", value);
                }
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Top element: %d\n", value);
                }
                break;
            case 4:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

