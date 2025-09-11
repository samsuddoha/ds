#include<stdio.h>
#define SIZE 10
#define EMPTY_STACK -99999
int stack[SIZE];
int top=-1;

void push(int item){
    if(top<SIZE-1){
        top=top+1;
        stack[top]=item;
        printf("Push item: %d\n", item);
    }
    else{
        printf("Push Failed. Stack is full!\n");
    }
}

void pop(){
    if(top>=0){
        printf("Top item %d is removed\n", stack[top]);
        top=top-1;
    }
    else{
        printf("Stack is empty!\n");
    }
}

int peek(){
    if(top>=0) return stack[top];
    else return EMPTY_STACK;
}

void displayStack(){
    if(top>=0)
    {
        printf("Stack element: Top to bottom: \n");
        for (int i = top; i>=0 ; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    else{
        printf("The stack is empty!");
    }
    
}

int main()
{
    int top_item=peek();
    if(!EMPTY_STACK)
        printf("Top item: %d\n", peek());
    else 
        printf("Stack is empty\n");

    push(10);
    push(20);
    push(30);
    pop();
    displayStack();

    return 0;
}