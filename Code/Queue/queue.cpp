#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue is Full!\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("%d inserted\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue is Empty!\n");
    else
    {
        printf("%d removed\n", queue[front]);
        queue[front++];
    } 
}

void display() {
    if (front == -1 || front>rear)
        printf("Queue is Empty!\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}
