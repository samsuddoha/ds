#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) return new Node(val);

    if (val < root->data) {
        root->left = insert(root->left, val);
    } 
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

bool search(Node* root, int key) {
    if (root == nullptr) return false;
    if (root->data == key) return true;

    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

Node* findMin(Node* root) {
    while (root->left != nullptr) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } 
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } 
    else { // Node found
        if (root->left == nullptr && root->right == nullptr) { // No child
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr) { // One child (right)
            Node* temp = root->right;
            delete root;
            return temp;
        } 
        else if (root->right == nullptr) { // One child (left)
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            // Two children
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

void preOrder(Node* root) { // root -> left -> right
    if (!root) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) { // left -> root -> right
    if (!root) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) { // left -> right -> root
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

signed main() {
    Node* root = nullptr;
    root = insert(root, 13);
    root = insert(root, 7);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 15);
    root = insert(root, 14);
    root = insert(root, 19);
    root = insert(root, 18);

    // Preorder
    preOrder(root); 
    cout << endl;

    // Inorder
    inOrder(root);
    cout << endl;

    // Postorder
    postOrder(root);
    cout << endl;

    // Level Order
    levelOrder(root); 
    cout << endl;

    // Search
    if (search(root, 10) == true) cout << "Found\n";
    else cout << "Not Found\n";

    // Delete
    root = deleteNode(root, 15);
    preOrder(root); 
    cout << endl;
}