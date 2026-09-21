 #include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;

    if (root == nullptr) {
        return result;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        vector<int> visited;

        int level = q.size();

        for (int i = 0; i < level; i++) {
            TreeNode* curr = q.front();
            q.pop();

            visited.push_back(curr->val);

            if (curr->left != nullptr) {
                q.push(curr->left);
            }

            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }

        result.push_back(visited);
    }

    return result;
}

int main() {
    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> result = levelOrder(root);

    for (auto level : result) {
        for (auto value : level) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}