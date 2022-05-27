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
    TreeNode* createBST(TreeNode* root, int n){




    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        if (preorder.size() == 0) return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        for (auto it : preorder) createBST(root, it);
        return root;
    }
};
int main(){


    return 0;
}