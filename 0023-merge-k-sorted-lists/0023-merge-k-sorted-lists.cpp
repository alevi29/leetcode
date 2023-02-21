/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <int, vector <int>, greater <int>> pq;
        for (auto i : lists) {
            while (i != nullptr) {
                pq.push(i->val);
                i = i->next;
            }
        }
        if (pq.empty()) return nullptr;
        ListNode* ret = new ListNode(pq.top());
        pq.pop();
        ListNode* temp = ret;
        while (!pq.empty()) {
            ListNode* newNode = new ListNode(pq.top());
            temp->next = newNode;
            temp = temp->next;
            pq.pop();
        }
        return ret;
    }
};