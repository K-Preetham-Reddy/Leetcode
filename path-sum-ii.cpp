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
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        List<List<Integer>> result= new ArrayList<>();
        List<Integer> temp=new ArrayList<>();
        comb(result,temp,root,targetSum);
        return result;
    }
    public void comb(List<List<Integer>> result,List<Integer> temp,TreeNode root, int lo){
        if(root==null){
            return;
        }
        if(lo==root.val && root.left==null && root.right==null){
            temp.add(root.val);
            result.add(new ArrayList<>(temp));
            return;
        }
        temp.add(root.val);
        List<Integer> temp2= new ArrayList<>(temp);
        comb(result,temp,root.left,lo-root.val);
        comb(result,temp2,root.right,lo-root.val);
        temp.remove(temp.size()-1);
        return;

    }
}