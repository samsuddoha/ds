#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isExist(Node* head, int target) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->val == target) return true;
        temp = temp->next;
    }

    return false;
}

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

void insertAtLast(Node* head, int value) {
    Node* newNode = createNode(value);
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void insertInTheMiddle(Node* head, int targetValue, int value) {
    Node* newNode = createNode(value);

    Node* temp = head;
    int currIndx = 1;
    while (temp != NULL) {
        if (temp->val == targetValue) break;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid";
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = createNode(15);

    Node* second = createNode(3);
    head->next = second;

    Node* third = createNode(17);
    second->next = third;
    
    Node* fourth = createNode(90);
    third->next = fourth;
 
    // traverse, display
    printLinkedList(head);

    // Searching
    /*
    if (isExist(head, 50) == true) cout << "Ache";
    else cout << "Nai";
    */

    // insert
    head = insertAtBeginning(head, 19);
    insertAtLast(head, 100);
    insertInTheMiddle(head, 18, 500);
    printLinkedList(head);
}

   