/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ArrayList<ListNode> ar=new ArrayList<>();
        if(head==null){
            return null;
        }
        while(head!=null){
            if(ar.contains(head)){
                return head;
            }else{
                ar.add(head);
            }
            head=head.next;
        }
        return null;
    }
}