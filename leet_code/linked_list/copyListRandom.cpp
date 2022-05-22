#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>mp;

        Node* temp = head;

        while (temp != NULL){
            mp[temp] = new Node(temp->val);
            temp = temp->next;
        }

        temp = head;

        while (temp != NULL){
            mp[temp]->random = mp[temp->random];
            mp[temp]->next = mp[temp->next];
            temp = temp->next;
        }
        return mp[head];
    }
};
int main(){

    return 0;
}