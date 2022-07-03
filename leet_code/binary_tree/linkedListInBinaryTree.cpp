#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};


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
    bool dfs(ListNode* head, TreeNode* root){
        if (!head) return true;
        if (!root) return false;
        if (root->val != head->val) return false;
        return (dfs(head->next, root->right) || dfs(head->next, root->left));
    }
    bool isSubPath(ListNode* head, TreeNode* root){
        if (!head) return true;
        if (!root) return false;
        return dfs(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
int main(){


    return 0;
}