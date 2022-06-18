#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};
class Solution {
public:
    vector<int>ans;
    Solution(ListNode* head) {
        while (head){
            ans.push_back(head->val);
            head = head->next;
        }
    }
    int getRandom() {
        int i = rand() % ans.size();
        return ans[i];
    }
};
