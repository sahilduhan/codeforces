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
    int maxDepth(Node* root) {
        int depth = 0;
        if(root == NULL) return 0;
        for(auto x:root->children) depth=max(depth,maxDepth(x));
        return 1+depth;
    }
};
int main()
{


    return 0;
}