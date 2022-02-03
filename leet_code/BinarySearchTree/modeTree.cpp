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
    void scanBST(TreeNode* root, unordered_map<int, int>& mp, int mode){
        if (root == NULL) return;
        mp[root->val]++;
        mode = max(mp[root->val], mode);
        scanBST(root->left, mp, mode);
        scanBST(root->right, mp, mode);
    }
    vector<int> findMode(TreeNode* root) {
        int mode = 0;
        unordered_map<int, int>mp;
        scanBST(root, mp, mode);
        vector<int>res;
        for (auto it : mp) if (it.second == mode) res.push_back(it.first);
        return res;
    }
};
int main(){

    return 0;
}