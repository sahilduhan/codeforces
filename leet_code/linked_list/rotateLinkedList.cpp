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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        int len = 1;
        while (temp->next and len++) temp = temp->next;
        temp->next = head;
        temp = head;
        k = k % len;
        len -= k;
        for (int i = 1;i < len;i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
int main(){


    return 0;
}