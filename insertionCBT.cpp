#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int key) {
        data = key;
        left = NULL;
        right = NULL;
    }
};

void insertCBT(node*& root, int value, queue<node*>& q) {
    node* newNode = new node(value);

    if (root == NULL) {
        root = newNode;
        q.push(root); 
        return;
    }

    node* curr = q.front();

    if (curr->left == NULL) {
        curr->left = newNode;
    } else {
        curr->right = newNode;
        q.pop();
    }

    q.push(newNode);
}

void levelOrder(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);
    while (!q.empty()) {
        node* current = q.front();
        q.pop();
        cout << current->data << " ";

        if (current->left != NULL) q.push(current->left);
        if (current->right != NULL) q.push(current->right);
    }
}

int main() {
    node* root = NULL;
    queue<node*> q;
    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (size_t i = 0; i < values.size(); i++) {
        insertCBT(root, values[i], q);
    }

    cout << "Level-order traversal after insertion: ";
    levelOrder(root);
    cout << endl;
    return 0;
}
