/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {//逆置链表
    struct ListNode* newhead=NULL;//令其等于NULL就已经分配空间，如果只是进行struct ListNode* newhead则需要分配空间。
    struct ListNode* temp=NULL;
    while(head){
        temp = head->next;
        head->next = newhead;
        newhead = head;
        head = temp;
    }
    return newhead;
}
