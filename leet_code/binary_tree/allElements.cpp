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
    void iterator(TreeNode* root1, vector<int>& answer){
        if (root1 == NULL) return;
        iterator(root1->left, answer);
        answer.push_back(root1->val);
        iterator(root1->right, answer);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> answer;
        iterator(root1, answer);
        iterator(root2, answer);
        sort(answer.begin(), answer.end());
        return answer;
    }
};
int main(){

    return 0;
}