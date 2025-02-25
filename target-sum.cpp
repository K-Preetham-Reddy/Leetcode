class Solution {
    public int solve(int[] nums, int target, int idx, int currSum){
        if(idx == nums.length){
            if(currSum == target) return 1;
            else return 0;
        }
         int plus = solve(nums, target, idx+1, currSum + nums[idx]);
         int minus = solve(nums, target, idx+1, currSum - nums[idx]);
         return plus + minus;
    }

    public int findTargetSumWays(int[] nums, int target) {
        return solve(nums, target, 0, 0);
    }
}