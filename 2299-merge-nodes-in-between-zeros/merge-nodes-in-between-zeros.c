/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* write = head;
    int sum = 0;
    for(struct ListNode* curr = head->next; curr; curr = curr->next){
        if(curr->val != 0){
            sum += curr->val;
        }else{
            write->val = sum;
            sum = 0;
            if(curr->next) write = write->next;
        }
    }
    struct ListNode* rest = write->next;
    write->next=NULL;
    while(rest){
        struct ListNode* next = rest->next;
        free(rest);
        rest = next;
    }
    return head;
}