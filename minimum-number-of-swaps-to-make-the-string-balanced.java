class Solution {
    public int minSwaps(String s) {
        int left=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='[') left++;
            if(s.charAt(i)==']'){
                if(left!=0){
                    left--;
                }
            }
        }
        return (left+1)/2;
    }
}