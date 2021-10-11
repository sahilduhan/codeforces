#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head, *fast = head;
        while (fast->next and slow)
        {
            slow = slow->next;
            if (fast->next->next != NULL) fast = fast->next->next;
            else fast = fast->next;
        }
        return slow;
    }
};
int main()
{

    return 0;
}