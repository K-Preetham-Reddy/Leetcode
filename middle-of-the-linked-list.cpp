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
    public ListNode middleNode(ListNode head) {
        if (head.next==null){
            return head;
        }
        if(head.next.next==null){
            return head.next;
        }
        ListNode cur=head;
        int len=1;
        while(cur!=null){
            cur=cur.next;
            len++;
        }
        int pos=(int)Math.floor((len+1)/2);
        ListNode dummy=new ListNode();
        dummy.next=head;
        int temp=0;
        while(temp<pos){
            dummy=dummy.next;
            temp++;
        }
        return dummy;

    }
}