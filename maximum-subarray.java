class Solution {
    public int maxSubArray(int[] nums) {
        int Current_Sum=nums[0];
        int Max_Sum=nums[0];
        for(int i=1;i<nums.length;i++){
            Current_Sum=Math.max(nums[i],Current_Sum+nums[i]);
            Max_Sum=Math.max(Current_Sum,Max_Sum);
        }
        return Max_Sum;
    }
}