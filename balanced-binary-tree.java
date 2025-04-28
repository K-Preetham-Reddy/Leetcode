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
    int height(TreeNode root){
        if(root==null){
            return -1;
        }
        int h1=height(root.left)+1;
        int h2=height(root.right)+1;
        return Math.max(h1,h2);
    }
    public boolean isBalanced(TreeNode root) {
        if(root==null) return true;
        int h3=height(root.left);
        int h4=height(root.right);
        if(!(Math.abs(h3-h4)==0 || Math.abs(h3-h4)==1)){
            return false;
        }
        return isBalanced(root.left) && isBalanced(root.right);
    }
}