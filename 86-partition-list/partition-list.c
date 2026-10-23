/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode smallDummy;
    struct ListNode largeDummy;

    smallDummy.next = NULL;
    largeDummy.next = NULL;

    struct ListNode* smallP = &smallDummy;
    struct ListNode* largeP = &largeDummy;
    while(head != NULL){
        if(head->val < x){
            smallP->next = head;
            smallP = smallP->next;
        }else{
            largeP->next = head;
            largeP = largeP->next;
        }
        head = head->next;
    }
    largeP->next = NULL;
    smallP->next = largeDummy.next;

    return smallDummy.next;
}