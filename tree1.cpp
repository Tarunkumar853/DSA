# include <bits/stdc++.h>
using namespace std;

struct node{
    char val;
    node *left;
    node *right;

    node(int data){
        val = data;
        left = right = NULL;
    }
};

int countNodes(node *root)
{
    if(root == NULL){
        return 0;
    } 

    return 1 + countNodes(root->left)+countNodes(root->right);
}

int countLeaf(node *root)
{
    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right == NULL)
        return 1;

    return countLeaf(root->left) + countLeaf(root->right);
}

int count1Node(node *root)
{
    if(root == NULL){
        return 0;
    }

    else{
        if((root->left != NULL && root->right == NULL)|| (root->left == NULL && root->right != NULL))
        {
            return 1+count1Node(root->left)+ count1Node(root->right);
        }
        else{
            return count1Node(root->left)+ count1Node(root->right);
        }
    }
}

int count2Node(node *root)
{
    if(root == NULL){
        return 0;
    }

    else{
        if(root->left != NULL && root->right != NULL){
            return 1+count2Node(root->left) + count2Node(root->right);
        }
        else{
            return count2Node(root->left) + count2Node(root->right);
        }
    }
}

int sumNodes(node *root)
{
    if(root == NULL){
        return 0;
    }

    return root->val + sumNodes(root->left) + sumNodes(root->right);
}

void inorder(node *root)
{
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout<< root->val <<" ";
    inorder(root->right);
}

void preorder(node *root){
    if(root == NULL){
        return;
    }
    
    cout<< root->val <<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(root == NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<< root->val <<" ";
}

int main()
{
    node*root = new node('A');
    root->left = new node('B');
    root->right = new node('C');
    root->left->left = new node('D');
    root->left->right = new node('E');

    cout<<"the count of nodes = "<< countNodes(root) <<endl;
    cout<< "the count of leaf = "<< countLeaf(root) <<endl;
    cout<< "the count of 1 Node = "<< count1Node(root) <<endl;
    cout<< "the count of 2 Node = "<< count2Node(root) <<endl;
    cout<< "the sum of nodes = "<< sumNodes(root) <<endl;
    cout<< "Inorder traversal = "; inorder(root); cout<<endl;
    cout<< "Preorder traversal = "; preorder(root); cout<<endl;
    cout<< "Postorder traversal = "; postorder(root); cout<<endl; 
}
