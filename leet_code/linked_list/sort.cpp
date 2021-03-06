#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->val == NULL) return head;
        ListNode* temp = head;
        vector<int> v;
        while (temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        temp = head;
        int i = 0;
        while (temp != NULL){
            temp->val = v[i++];
            temp = temp->next;
        }
        return head;
    }
};