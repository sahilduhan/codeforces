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
    TreeNode* listToBst(ListNode* start, ListNode* end){

        if (start == end) return NULL;

        ListNode* fast = start, * slow = start;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* mid = slow;

        // assign the midd val as the root node

        TreeNode* newRoot = new TreeNode(mid->val);

        // since all the small values are on the left of the list
        // tree left side

        newRoot->left = listToBst(start, mid);

        // tree right side
        newRoot->right = listToBst(mid->next, end);

        return newRoot;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == NULL) return NULL;
        return listToBst(head, head);
    }
};
int main(){

}
