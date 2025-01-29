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
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        int temp=Integer.MIN_VALUE;
        ListNode dummy=new ListNode();
        ListNode new_cur=dummy;
        ListNode cur=head;

        while(cur.next!=null){
            if(cur.val!=temp && (cur.next.val!=cur.val)){
                new_cur.next=cur;
                new_cur=new_cur.next;
            }else{
                temp=cur.val;
            }
            cur=cur.next;
        }
        if(cur.val!=temp){
            new_cur.next=cur;
            new_cur=new_cur.next;
        }
        new_cur.next=null;
        return dummy.next;
    }
}