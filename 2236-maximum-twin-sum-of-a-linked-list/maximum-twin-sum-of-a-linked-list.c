/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while(fast){
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode* prev = NULL;
    while(slow){
        struct ListNode* next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }
    int best = 0;
    for(struct ListNode *a = head, *b = prev; b; a = a->next, b = b->next){
        if(a->val + b->val > best) best = a->val + b->val;
    }
    return best;
}