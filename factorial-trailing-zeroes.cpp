class Solution {
    public int trailingZeroes(int n) {
        if(n==0|| n==1||n==2||n==3||n==4){
            return 0;
        }
        int count=0;
        for(int i=1;i<=n;i++){
            int temp=0;
            for(int j=1;j<=n;j++){
                if(i%Math.pow(5,j)==0){
                    temp++;
                    continue;
                }
                else{
                    break;
                }
            }
            count+=temp;
            temp=0;
        }
        return count;
    }
}