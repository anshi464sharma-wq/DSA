/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(!head->next){
        free(head);
        return NULL;
    }
    struct ListNode* slow = head;
    struct ListNode* fast = head->next->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode* gone = slow->next;
    slow->next = gone->next;
    free(gone);
    return head;
    
}