/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* tail;
        ListNode* dummy = head;
        head = head->next;
        dummy->next = nullptr;
        while(head){
            tail = dummy;
            dummy = head;
            head = head->next;
            dummy->next = tail;
        }
        return dummy;
    }
};