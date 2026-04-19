#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    //malloc is used to dynamically allocate memory at runtime
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));


    // Assign + link
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;

    //last node er child nai tai addrasse NULL
    third->next = NULL;

    return 0;
}