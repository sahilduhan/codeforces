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
    void isLeft(TreeNode* root, int& ans, bool flag){
        if (root == NULL) return;

        if (flag && root->left == NULL && root->right == NULL) {
            ans += root->val;
            return;
        }

        isLeft(root->left, ans, 1);
        isLeft(root->right, ans, 0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        isLeft(root, ans, 0);
        return ans;
    }
};
int main(){


    return 0;
}
