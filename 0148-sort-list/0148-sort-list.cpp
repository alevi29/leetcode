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
    vector <int> vals;
public:
    ListNode* sortList(ListNode* head) {
        ListNode* trav = head;
        while (trav != nullptr) {
            vals.push_back(trav->val);
            trav = trav->next;
        }
        sort(vals.begin(), vals.end());
        trav = head;
        int i = 0;
        while (trav != nullptr) {
            trav->val = vals[i];
            trav = trav->next;
            i++;
        }
        return head;
    }
};