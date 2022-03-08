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
    int sum = 0, max_height = 0;
    void solve(TreeNode* root, int h){
        if (!root) return;
        if (h == max_height) sum += root->val;
        if (h > max_height){
            max_height = h;
            sum = root->val;
        }
        solve(root->left, h + 1);
        solve(root->right, h + 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        solve(root, 0);
        return sum;
    }
};
int main(){


    return 0;
}