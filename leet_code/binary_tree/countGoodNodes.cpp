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
    int cnt;
    void count(TreeNode* root, int m){
        if (!root) return;
        m = max(m, root->val);
        if (root->val >= m) cnt++;
        count(root->left, m);
        count(root->right, m);
    }
    int goodNodes(TreeNode* root) {
        int c = INT_MIN;
        count(root, c);
        return c;
    }
};
int main(){

    return 0;
}