/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    ListNode node;
     int length = 0;
    public Solution(ListNode head) {
        node = head;
        for(; head != null; head = head.next){
            length++;
        }
    }
    
    public int getRandom() {
        ListNode temp = node;
        int i = (int)(Math.random()*(length));
        for(int j = 0; j < i; j++){
            temp = temp.next;
        }
        return temp.val;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */