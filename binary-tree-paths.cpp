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
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> result=new ArrayList<>();
        String s="";
        path(root,result,s);
        return result;
    }
    public static void path(TreeNode root, List<String> result, String s){
        s=s.concat(root.val+ "");
        if(root.left==null && root.right!=null){
            s=s.concat("->");
            path(root.right,result,s);
            s=s.substring(0,s.length()-2);
        }else if(root.left!=null && root.right==null){
            s=s.concat("->");
            path(root.left,result,s);
            s=s.substring(0,s.length()-2);
        }else if(root.left!=null && root.right!=null){
            s=s.concat("->");
            path(root.left,result,s);
            path(root.right,result,s);
        }
        else{
            result.add(s);
        }
        return;
    }
}