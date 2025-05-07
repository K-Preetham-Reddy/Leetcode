class Solution {
    public boolean canJump(int[] nums) {
        int i=0;
        int len=nums.length;
        int[] arr= new int[2];
        if (len==1){
            return true;
        }
        while(i<len){
            arr=max(nums,i,nums[i]);
            if ((arr[0]+arr[1])>=len-1){
                return true;
            }
            if(arr[1]<=i){
                return false;
            }
            i=arr[1];
        }
        return false;
    }
    public int[] max(int[] nums,int i, int rang){
        int[] ma_ind= {0,0};
        int ln=nums.length;
        for(int j=i;j<=Math.min(rang+i,ln-1);j++){
            if(j==ln-1){
                ma_ind[0]=nums[ln-1];
                ma_ind[1]=ln-1;
                break;
            }
            else if (nums[j]+j>ma_ind[0]+ma_ind[1]){
                ma_ind[0]=nums[j];
                ma_ind[1]=j;
            }
            
        }
        return ma_ind;
    }
}