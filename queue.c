#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("%d enqueued to the queue.\n", value);
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return -1;
    } else {
        return queue[front++];
    }
}

void displayFront() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

int main() {
    int choice, value;

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display Front\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1) {
                    printf("Dequeued: %d\n", value);
                }
                break;
            case 3:
                displayFront();
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

