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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL)
            return res;

        queue<TreeNode*> q;
        int count = 0;
        q.push(root);
        while (!q.empty())
        {
            vector<int> level;
            int n = q.size();

            while (n--)
            {
                TreeNode* node = q.front();
                q.pop();

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                level.push_back(node->val);

            }
            if (count % 2 == 1) reverse(level.begin(), level.end());
            count++;
            res.push_back(level);
        }
        return res;
    }
};
int main(){

    return 0;
}