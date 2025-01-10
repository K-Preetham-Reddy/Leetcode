class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] fin=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            fin[i]=1;
        }
        int left=nums[0];
        for(int i=1;i<nums.length;i++){
            fin[i]=fin[i]*(left);
            left=nums[i]*left;
        }
        int right=nums[nums.length-1];
        for(int i=nums.length-2;i>=0;i--){
            fin[i]=fin[i]*(right);
            right=nums[i]*right;
        }
        return fin;
    }
}