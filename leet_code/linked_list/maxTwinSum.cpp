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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int>arr;
        while (temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int ans = 0;
        int i = 0, j = arr.size() - 1;

        while (i < j){
            int sum = arr[i] + arr[j];
            ans = max(ans, sum);
            i++;
            j--;
        }
        return ans;
    }
};
int main(){

    return 0;
}