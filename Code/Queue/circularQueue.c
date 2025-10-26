#include<stdio.h>
#define SIZE 5

int CircularQ[SIZE];
int front=-1, rear=-1, totalItem=0;

int isFull(){

}
int isEmpty(){

}
void enqueue(int value){
    if(front==(rear+1)%SIZE) printf("The Queue is Full!");
    else{
        if (front==-1) front=0;
        rear=(rear+1)%SIZE;
        CircularQ[rear]=value;
        printf("%d is added to CircularQ\n", value);
    }
}

void dequeue(){
    if(rear==-1){
        printf("The Q is Empty!\n");
    }
    else{
        printf("%d is removed successfully.\n", CircularQ[front]);
        if(front==rear) //reset the queue
            front=rear=-1;
        else{
             front=(front+1)%SIZE;
        }
    }
}

void display(){
    if(rear==-1)
    {
         printf("The Q is Empty!\n");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d ", CircularQ[i]);
            i=(i+1)%SIZE;
        }
        printf("\n");
    
    }
    
}
int main(){
    display();
    enqueue(20);
    enqueue(50);
    display();
    dequeue();
    return 0;
}