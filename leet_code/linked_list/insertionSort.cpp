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

    ListNode* insertionSortList(ListNode* head) {
        if (!head) return NULL;
        if (!head->next) return head;
        ListNode* tempHead;
        ListNode* curr = head->next;
        while (curr) {
            tempHead = head;
            while (tempHead && tempHead != curr) {
                if (tempHead->val > curr->val) swap(tempHead->val, curr->val);
                tempHead = tempHead->next;
            }
            curr = curr->next;
        }
        return head;
    }
};

int main(){


    return 0;
}