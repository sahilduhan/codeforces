#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
};

void solve(Node* root, vector<int>& ans){
    if (!root) return;
    queue<Node*>q;
    q.push(root);
    while (!q.empty()){
        Node* temp = q.front();
        while (temp){
            ans.push_back(temp->data);
            if (temp->right) q.push(temp->right);

        }
    }
}
vector<int> diagonal(Node* root)
{
    vector<int>ans;
    solve(root, ans);
    return ans;
    // your code here
}
int main(){

    return 0;
}