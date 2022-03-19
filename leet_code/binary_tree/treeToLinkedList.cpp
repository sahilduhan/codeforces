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
    void flatten(TreeNode* root) {
        if (!root) return;
        stack<TreeNode*>st;
        st.push(root);

        while (!st.empty()){
            TreeNode* currentNode = st.top();
            st.pop();
            if (currentNode->right)st.push(currentNode->right);
            if (currentNode->left) st.push(currentNode->left);
            if (!st.empty()) currentNode->right = st.top();
            currentNode->left = NULL;
        }
    }
};
int main(){

    return 0;

}