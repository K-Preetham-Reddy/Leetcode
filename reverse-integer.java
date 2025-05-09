class Solution {
    public int reverse(int x) {
        long result=0;
        while(x!=0){
            int n=x%10;
            result=(result*10)+n;
            x/=10;
        }
        if(result<Integer.MIN_VALUE || result>Integer.MAX_VALUE){
            return 0;
        }
        return (int)result;
    }
}