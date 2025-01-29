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
    public ListNode partition(ListNode head, int x) {
        ListNode less=new ListNode();
        ListNode cur1=less;
        ListNode great=new ListNode();
        ListNode cur2=great;
        while(head!=null){
            if (head.val>=x){
                cur2.next=head;
                cur2=cur2.next;
            }else{
                cur1.next=head;
                cur1=cur1.next;
            }
            head=head.next;
        }
        cur1.next=great.next;
        cur2.next=null;
        return less.next;
    }
}