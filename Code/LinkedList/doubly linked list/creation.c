#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
}node;

node *head=NULL;

node* create(int val){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}