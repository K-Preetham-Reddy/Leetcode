class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int len=triangle.size();
        int[][] dp=new int[len+1][len+1];
        for(int i=len-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                dp[i][j]=triangle.get(i).get(j)+Math.min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
}