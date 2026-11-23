# include <bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node *left, *right;
    int height;
    node(int k):
        key(k),left(NULL), right(NULL), height(1)
        {}
};

int height(node *n)
{
    return n?n->height:0;
}
int getBalance(node *n)
{
    return n?height(n->left) - height(n->right): 0;
}
int updateHeight(node *n)
{
    return n->height = 1 + max(height(n->left),height(n->right));
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *b = y->left;
    y->left = x;
    x->right = b;
    updateHeight(x);
    updateHeight(y);
    return y;
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *b = x->right;
    x->right = y;
    y->left = b;
    updateHeight(y);
    updateHeight(x);
    return x;
}

node *insert(node *root, int key){
    if(root == NULL) return new node(key);
    if(key < root->key) root->left = insert(root->left, key);
    else if(key > root->key) root->right = insert(root->right, key);
    else return root;

    updateHeight(root);
    int balance = getBalance(root);

    if(balance > 1 && key < root->left->key) return rightRotate(root);
    if(balance < -1 && key > root->right->key) return leftRotate(root);
    if(balance < -1 && key < root->right->key){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    if(balance > 1 && key > root->left->key)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    return root;
}

int main()
{
    node *root = NULL;
    int keys[] = {10,20,30,40,50,60,70};
    for(int k: keys)
    {
        root = insert(root, k);
        cout<<"Inserted "<<k<<"->root is"<< root->key<<endl;
    }
}