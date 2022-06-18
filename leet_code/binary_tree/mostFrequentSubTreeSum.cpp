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
    map<int, int> m;
    int maxfreq = INT_MIN;
    int dfs(TreeNode* root){
        if (!root) return 0;
        int lSum = dfs(root->left);
        int rSum = dfs(root->right);
        int sum = lSum + rSum + root->val;
        m[sum]++;
        maxfreq = max(maxfreq, m[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> v;
        for (auto i : m) if (i.second == maxfreq) v.push_back(i.first);
        return v;
    }
};
int main(){


    return 0;
}