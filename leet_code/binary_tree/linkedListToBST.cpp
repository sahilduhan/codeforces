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

    TreeNode* arrToBST(vector<int>v, int low, int high){
        if (low > high) return NULL;

        int mid = low + (high - low) / 2;

        TreeNode* newnode = new TreeNode(v[mid]);
        newnode->left = arrToBST(v, low, mid - 1);
        newnode->right = arrToBST(v, mid + 1, high);
        return newnode;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        while (head){
            v.push_back(head->val);
            head = head->next;
        }
        TreeNode* rootnode = arrToBST(v, 0, v.size() - 1);
        return rootnode;
    }
};

int main(){

}
