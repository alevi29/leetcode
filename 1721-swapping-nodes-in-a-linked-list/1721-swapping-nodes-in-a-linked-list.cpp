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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* toSwap;
        int size = 0;
        ListNode* trav = head;
        while (trav != nullptr) {
            size++;
            if (size == k) toSwap = trav;
            trav = trav->next;
        }
        trav = head;
        for (int i = 0; i < size - k; ++i) {
            trav = trav->next;
        }
        swap(trav->val, toSwap->val);
        return head;
    }
};