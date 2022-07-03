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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        stack<int>st;
        ListNode* temp = head;
        while (temp){
            st.push(temp->val);
        }
    }
};

int main(){

    return 0;
}