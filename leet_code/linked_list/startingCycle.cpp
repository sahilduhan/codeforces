#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (!head || !head->next) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow){
                slow = head;
                while (fast != slow){
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
int main(){

    return 0;
}