#include<bits/stdc++.h>
using namespace std;

int n = 10;
char tree[50];

void preOrderTraversel(int currNode) { // root -> left -> right;
    cout << tree[currNode] << " ";

    int leftNode = currNode*2;
    if (tree[leftNode] != '*') preOrderTraversel(leftNode);

    int rightNode = currNode*2 + 1;
    if (tree[rightNode] != '*') preOrderTraversel(rightNode);
}

void inOrderTraversel(int currNode) { // left -> root -> right;
    int leftNode = currNode*2;
    if (tree[leftNode] != '*') inOrderTraversel(leftNode);

    cout << tree[currNode] << " ";

    int rightNode = currNode*2 + 1;
    if (tree[rightNode] != '*') inOrderTraversel(rightNode);
}

void postOrderTraversel(int currNode) { // left -> root -> right;
    int leftNode = currNode*2;
    if (tree[leftNode] != '*') postOrderTraversel(leftNode);

    int rightNode = currNode*2 + 1;
    if (tree[rightNode] != '*') postOrderTraversel(rightNode);
    
    cout << tree[currNode] << " ";
}

signed main() {
    for (int i = 0; i < 50; i++) {
        tree[i] = '*';
    }

    tree[1] = 'R';
    tree[2] = 'A';
    tree[3] = 'B';
    tree[4] = 'C';
    tree[5] = 'D';
    tree[6] = 'E';
    tree[7] = 'F';
    tree[14] = 'G';

    preOrderTraversel(1);
    cout << endl;
    inOrderTraversel(1);
    cout << endl;
    postOrderTraversel(1);
}

/*
n nodes;
n = 1, 2, 3, 4, .... n
*/