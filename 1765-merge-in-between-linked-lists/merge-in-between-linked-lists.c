/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode* before = list1;
    for(int i = 1; i<a; i++)
    before = before->next;
    struct ListNode* curr = before->next;
    for(int i = a; i<=b; i++){
        struct ListNode* next = curr->next;
        free(curr);
        curr = next;
    }
    struct ListNode* tail2 = list2;
    while (tail2->next) tail2 = tail2->next;
    before->next = list2;
    tail2->next = curr;
    return list1;

}