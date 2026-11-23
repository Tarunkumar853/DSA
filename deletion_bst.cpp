#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int value) {
    if(root == NULL)
        return new Node(value);

    if(value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

Node* findmin(Node* root) {
    while(root->left != NULL)
        root = root->left;

    return root;
}

Node* deleteNode(Node* root, int key) {
    if(root == NULL)
        return NULL;

    if(key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {
        if(root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if(root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root) {
    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 7);
    root = insert(root, 8);
    root = insert(root, 10);
    root = insert(root, 12);
    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 30);

    cout << "Original tree: ";
    inorder(root);
    cout << endl;

    int n;
    cout << "Enter number of nodes to delete: ";
    cin >> n;

    while(n--) {
        int key;
        cin >> key;

        root = deleteNode(root, key);

        cout << "After deleting " << key << ": ";
        inorder(root);
        cout << endl;
    }

    return 0;
}