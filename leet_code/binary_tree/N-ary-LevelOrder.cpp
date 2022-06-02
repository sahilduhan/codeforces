#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*>q;
        q.push(root);

        if (!root) return ans;

        while (!q.empty()){
            vector<int>temp;
            int n = q.size();
            for (int i = 0;i < n;i++){
                Node* node = q.front();
                q.pop();
                temp.push_back(node->val);
                for (auto it : node->children) if (it != NULL) q.push(it);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
