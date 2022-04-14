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
    void traversal(TreeNode* root, int& ans, int currSum){
        if (!root) return;
        currSum = currSum * 10 + root->val;
        if (!root->left && !root->right) ans += currSum;
        traversal(root->left, ans, currSum);
        traversal(root->right, ans, currSum);
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        traversal(root, ans, 0);
        return ans;
    }
};
int main(){


    return 0;
}