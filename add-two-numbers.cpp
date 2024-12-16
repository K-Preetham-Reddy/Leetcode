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
 import java.util.ArrayList;
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode current=new ListNode();
        ListNode re=current;
        int carry=0,total=0;
        while(l1!=null|| l2!=null || carry!=0){
            total=carry;
            if(l1!=null){
                total+=l1.val;
                l1=l1.next;
            }
            if(l2!=null){
                total+=l2.val;
                l2=l2.next;
            }
            carry=total/10;
            int num=total%10;
            current.next=new ListNode(num);
            current=current.next;
        }
        return re.next;
    }
}