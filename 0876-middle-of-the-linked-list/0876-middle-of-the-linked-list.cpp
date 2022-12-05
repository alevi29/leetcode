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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* trav = head;
        while (trav != nullptr) {
            size++;
            trav = trav->next;
        }
        trav = head;
        for (int i = 0; i < size/2; i ++) {
            trav = trav->next;
        }
        return trav;
    }
};