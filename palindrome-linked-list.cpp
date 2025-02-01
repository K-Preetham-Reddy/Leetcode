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
    public boolean isPalindrome(ListNode head) {
        ArrayList<Integer> st=new ArrayList<>();
        if(head==null ||head.next==null){
            return true;
        }
        while(head!=null){
            st.add(head.val);
            head=head.next;
        }
        int left=0;
        int right=st.size()-1;
        while(left<right){
            if(st.get(left)!=st.get(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
        

    }
}