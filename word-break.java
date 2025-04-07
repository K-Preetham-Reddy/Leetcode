class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        int n=s.length();
        int max_len=0;
        boolean[] dp=new boolean[n+1];
        dp[0]=true;
        for(int i=0;i<wordDict.size();i++){
            max_len=Math.max(wordDict.get(i).length(),max_len);
        }
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=Math.max(i-max_len-1,0);j--){
                if(dp[j]==true && wordDict.contains(s.substring(j,i))){
                    dp[i]=true;
                    break;
                }
            }
        }
        for(int i=0;i<=n;i++){
            System.out.println(dp[i]);
        }
        return dp[n];



    }
}