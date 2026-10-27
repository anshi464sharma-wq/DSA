/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
 }
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    for(struct ListNode* curr = head; curr->next; curr = curr->next->next){
        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->val = gcd(curr->val,curr->next->val);
        node->next = curr->next;
        curr->next = node;
    }
    return head;
    
}