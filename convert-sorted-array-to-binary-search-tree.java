/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        return result(nums,0,nums.length-1);
    }
    public TreeNode result(int[] nums,int start,int end){
        if(end<start) return null;
        int center=(end+start)/2;
        TreeNode root=new TreeNode(nums[center]);
        root.left=result(nums,start,center-1);
        root.right=result(nums,center+1,end);
        return root;
    }
}