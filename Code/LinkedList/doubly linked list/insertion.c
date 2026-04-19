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