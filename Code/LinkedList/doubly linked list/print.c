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