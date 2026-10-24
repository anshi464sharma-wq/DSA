/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode dummy = {0, head};
    struct ListNode* fast = &dummy;
    struct ListNode* slow = &dummy;

    for(int i = 0; i<= n; i++)
    fast = fast->next;
    while (fast){
        slow = slow->next;
        fast = fast->next;
    }
    struct ListNode* gone = slow->next;
    slow->next = gone->next;
    free(gone);
    return dummy.next;
    
}