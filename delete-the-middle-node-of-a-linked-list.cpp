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
    public ListNode deleteMiddle(ListNode head) {
        if(head==null || head.next==null){
            return null;
        }
        ListNode cur=head;
        int len=1;
        while(cur!=null){
            len++;
            cur=cur.next;
        }
        int mid=(int)Math.ceil((len+1)/2);
        ListNode dummy = new ListNode();
        dummy.next=head;
        for(int i=0;i<mid-1;i++){
            dummy=dummy.next;
        }
        dummy.next=dummy.next.next;
        return head;

    }
}