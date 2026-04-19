
/*int n=10;
int a[]={1,2,3,4,5,6,7,8,9,10};
int i=0;
while(i<n)
{
    printf("%d ",a[i]);
}*/
//same approach suitable for printing linklist 

// Print list
void traverseList(struct Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) {
            printf(" -> ");
        }
        head = head->next;
    }
    printf("\n");
}