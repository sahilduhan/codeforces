#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void dfs(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode*& ans){
        if (!original) return;
        if (original == target) ans = cloned;
        dfs(original->left, cloned->left, target, ans);
        dfs(original->right, cloned->right, target, ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = NULL;
        dfs(original, cloned, target, ans);
        return ans;
    }
};
int main(){


    return 0;
}