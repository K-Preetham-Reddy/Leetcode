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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result=new ArrayList<>();
        if(root==null) return result;
        Queue<TreeNode> qu=new LinkedList<>();
        qu.offer(root);
        boolean LR=true;
        while(!qu.isEmpty()){
            int len=qu.size();
            List<Integer> temp=new ArrayList<>();
            for(int i=0;i<len;i++){
                TreeNode node=qu.poll();
                if(LR){
                    temp.add(node.val);
                }else{
                    temp.add(0,node.val);
                }
                if(node.left!=null) qu.offer(node.left);
                if(node.right!=null) qu.offer(node.right);
            }
            if(temp.size()!=0){
                result.add(temp);
            }
            LR=!LR;
        }
        return result;
    }
}