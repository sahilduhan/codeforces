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
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) count++;
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);

    }
};