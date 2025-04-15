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
    List<Integer> arr=new ArrayList<>();
    public int kthSmallest(TreeNode root, int k) {
        se(root);
        Collections.sort(arr);
        System.out.println(arr);
        return arr.get(k-1);
    }
    public void se(TreeNode root){
        if(root==null){
            return;
        }else{
            arr.add(root.val);
            se(root.left);
            se(root.right);
        }
        return;
    }
}