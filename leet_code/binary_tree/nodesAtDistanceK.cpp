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
    bool testTarget(TreeNode* root, TreeNode* target){
        if (!root) return false;
        if (root == target) return true;
        testTarget(root->left, target);
        testTarget(root->right, target);
        return false;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

    }
};
int main(){
    return 0;
}