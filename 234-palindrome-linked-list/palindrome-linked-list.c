/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int arr[100000];
    int n = 0;

    //store linked list values in array
    while(head != NULL){
        arr[n] = head->val;
        n++;
        head = head->next;
    }
    //cheack from both sides
    int i = 0;
    int j = n-1;

    while(i<j){
        if (arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}