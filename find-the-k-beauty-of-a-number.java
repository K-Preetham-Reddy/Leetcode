class Solution {
    public int divisorSubstrings(int num, int k) {
        int count=0;
        String str=num+"";
        for(int i=0;i<=str.length()-k;i++){
            String sub=str.substring(i,i+k);
            int val=Integer.parseInt(sub);
            if(val!=0 && num%(val)==0){
                count++;
            }
        }
        return count;
    }
}