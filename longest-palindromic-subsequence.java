class Solution {
    public int longestPalindromeSubseq(String s) {
        StringBuffer s1=new StringBuffer(s);
        s1.reverse();
        String s2=new String(s1);
        int n=s.length();
        int[][] dp=new int[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s.charAt(i-1)==s2.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
}