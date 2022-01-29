#include <bits/stdc++.h>
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
    void dfs(TreeNode* root, unordered_map<int, int>& mp){
        if (root == NULL) return;
        if (root->left) dfs(root->left, mp);
        mp[root->val]++;
        if (root->right) dfs(root->right, mp);
    }
    bool isUnivalTree(TreeNode* root) {
        unordered_map<int, int>mp;
        dfs(root, mp);
        if (mp.size() > 1) return false;
        return true;
    }
};
int main(){

    return 0;
}