/*
void search(int arr[], int n, int key) {
    int position = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            position = i + 1; // position (1-based)
            break;
        }
    }

    if(position != -1) {
        printf("Value %d found at position %d\n", key, position);
    } else {
        printf("Value %d not found\n", key);
    }
}
*/


void search(struct Node* head, int key) {
    int position = 1;

    while (head != NULL) {
        if (head->data == key) {
            printf("Value %d found at position %d\n", key, position);
            return;
        }
        head = head->next;
        position++;
    }

    printf("Value %d not found\n", key);
}