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