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
    public ListNode sortList(ListNode head) {
        List<Integer> li=new ArrayList<>();
        while(head!=null){
            li.add(head.val);
            head=head.next;
        }
        Collections.sort(li);
        ListNode he=new ListNode();
        ListNode cur=he;
        for(int i=0;i<li.size();i++){
            ListNode temp=new ListNode(li.get(i));
            cur.next=temp;
            cur=cur.next;
        }
        return he.next;
    }
}