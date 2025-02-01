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
    public ListNode oddEvenList(ListNode head) {
        if(head==null || head.next==null || head.next.next==null){
            return head;
        }
        ListNode odd=new ListNode();
        ListNode cur1=odd;
        ListNode even=new ListNode();
        ListNode cur2=even;
        int ind=1;
        while(head!=null){
            if(ind%2!=0){
                cur1.next=head;
                cur1=cur1.next;
            }else{
                cur2.next=head;
                cur2=cur2.next;
            }
            ind++;
            head=head.next;
        }
        cur2.next=null;
        cur1.next=even.next;
        return odd.next;


    }
}