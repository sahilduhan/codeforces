#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node->next){
            node->val = node->next->val;
            node->next = node->next->next;
        }
        else delete node;
    }
};