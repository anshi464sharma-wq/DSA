/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int value = 0;
    for(struct ListNode* curr=head; curr ; curr=curr->next){
        value = value*2 + curr->val;
    }
    return value;
}