/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if (head->next == NULL) {
        return NULL;
    }
    struct ListNode* temp = head;
    int length = 0;
     while (temp != NULL) {
         length++;
         temp = temp->next;
     }
    if (n == length) {
        return head->next;
    }
    temp = head;
    int index = 0;
    while (index < length - n - 1) {
        temp = temp->next;
        index++;
    }
    temp->next = temp->next->next;
    return head;
}