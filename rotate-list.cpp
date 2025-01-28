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
    public ListNode rotateRight(ListNode head, int k) {
        if(k==0|| head==null || head.next==null){
            return head;
        }
        ListNode dummy=new ListNode();
        dummy.next=head;
        int len=0;
        while(dummy.next!=null){
            dummy=dummy.next;
            len++;
        }
        k=k%len;
        if(k==0){
            return head;
        }
        int last=len-k;
        ListNode cur=new ListNode();
        cur.next=head;
        int index=0;
        while(index<last){
            cur=cur.next;
            index++;
        }
        ListNode new_head=cur.next;
        cur.next=null;
        ListNode remain=new_head;
        while(remain.next!=null){
            remain=remain.next;
        }
        remain.next=head;
        return new_head;
    }
}