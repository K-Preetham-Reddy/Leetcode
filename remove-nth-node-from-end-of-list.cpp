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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode cur=new ListNode();
        cur.next=head;
        int length=0;
        while(cur.next!=null){
            cur=cur.next;
            length++;
        }
        ListNode cur2=new ListNode();
        cur2.next=head;
        int position=0;
        while(position<(length-n)){
            cur2=cur2.next;
            position++;
        }
        if(position==0){
            head=cur2.next.next;
            return head;
        }
        cur2.next=cur2.next.next;
        return head;
    }
}