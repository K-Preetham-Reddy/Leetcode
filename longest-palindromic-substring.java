class Solution {
    public String longestPalindrome(String s) {
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
        StringBuffer result=new StringBuffer();
        int i=n;
        int j=n;
        while(i>0 && j>0){
            if(s.charAt(i-1)==s2.charAt(j-1)){
                result.append(s.charAt(i-1));
                i--;
                j--;
            }else if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
        result.reverse();
        return  result.toString();
    }
}