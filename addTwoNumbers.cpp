class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * l3 = nullptr;
        ListNode * head = nullptr;
        int carry = 0;
        
        while(l1 != nullptr || l2 != nullptr|| carry)
        {
            int sum = (l1? l1->val: 0)+(l2 ? l2->val:0)+carry;
            if(l1)l1 = l1->next;
            if(l2)l2 = l2->next;
            carry = sum / 10;
            sum = sum % 10;
            
            if(!l3)
            {
                l3 = new ListNode(sum);
                head = l3;
            }
            else
            {
                l3->next = new ListNode(sum);
                l3 = l3->next;
            }
        }
        
     
        return head;
    }
};