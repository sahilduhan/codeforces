#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* solve(TreeNode* root, int x){
        if (root == NULL){
            root = new TreeNode(x);
            return root;
        }
        if (x > root->val) root->right = solve(root->right, x);

        else root->left = solve(root->left, x);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for (auto it : preorder) root = solve(root, it);
        return root;
    }
};
int main(){


    return 0;
}