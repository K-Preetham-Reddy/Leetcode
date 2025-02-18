class Solution {
    String smallestString = null; // To store the lexicographically smallest string

    public String smallestFromLeaf(TreeNode root) {
        char[] arr = "abcdefghijklmnopqrstuvwxyz".toCharArray(); // Mapping integers to characters
        StringBuilder re = new StringBuilder();
        dfs(root, arr, re);
        return smallestString; // Return the smallest string found
    }

    public void dfs(TreeNode root, char[] arr, StringBuilder re) {
        if (root == null) {
            return;
        }

        // Prepend the current character (going from leaf to root)
        re.insert(0, arr[root.val]);

        // If it's a leaf node, check the current string
        if (root.left == null && root.right == null) {
            String current = re.toString();
            if (smallestString == null || current.compareTo(smallestString) < 0) {
                smallestString = current; // Update the smallest string if current is smaller
            }
        }

        // Recurse on left and right children
        if (root.left != null) {
            dfs(root.left, arr, re);
        }
        if (root.right != null) {
            dfs(root.right, arr, re);
        }

        // Backtrack: remove the first character to explore other paths (correct for leaf-to-root)
        re.deleteCharAt(0);
    }
}
