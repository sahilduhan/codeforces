#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
    bool isCycle(ListNode* head){
        ListNode* slow, * fast;
        slow = fast = head;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow){
                return true;
                // &firstPtr = fast; 
            }
        }return false;
    }
    ListNode* detectCycle(ListNode* head) {
        ListNode* firstPtr;
    }
};
