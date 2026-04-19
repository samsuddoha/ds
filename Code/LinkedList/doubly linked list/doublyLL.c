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

void insert_begin(int val){
    node *newnode=create(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_end(int val){
    node *newnode=create(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}

void insert_pos(int val,int pos){
    if(pos==1){
        insert_begin(val);
        return;
    }
    node *temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++) temp=temp->next;
    if(temp==NULL) return;
    node *newnode=create(val);
    newnode->next=temp->next;
    newnode->prev=temp;
    if(temp->next!=NULL) temp->next->prev=newnode;
    temp->next=newnode;
}

void delete_begin(){
    if(head==NULL) return;
    node *temp=head;
    head=head->next;
    if(head!=NULL) head->prev=NULL;
    free(temp);
}

void delete_end(){
    if(head==NULL) return;
    node *temp=head;
    while(temp->next!=NULL) temp=temp->next;
    if(temp->prev!=NULL) temp->prev->next=NULL;
    else head=NULL;
    free(temp);
}

void delete_pos(int pos){
    if(head==NULL) return;
    if(pos==1){
        delete_begin();
        return;
    }
    node *temp=head;
    for(int i=1;i<pos && temp!=NULL;i++) temp=temp->next;
    if(temp==NULL) return;
    if(temp->next!=NULL) temp->next->prev=temp->prev;
    if(temp->prev!=NULL) temp->prev->next=temp->next;
    free(temp);
}

int search(int val){
    node *temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==val) return pos;
        temp=temp->next;
        pos++;
    }
    return -1;
}

void display(){
    node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_begin(5);
    insert_pos(15,3);
    display();

    printf("%d\n",search(20));

    delete_begin();
    delete_end();
    delete_pos(2);
    display();

    return 0;
}