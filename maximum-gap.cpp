class Solution {
    public int maximumGap(int[] nums) {
        if(nums.length<2){
            return 0;
        }
        Arrays.sort(nums);
        int max_diff=0;
        for(int i=0;i<=nums.length-2;i++){
            max_diff=Math.max(max_diff,(nums[i+1]-nums[i]));
        }
        return max_diff;
        
        

    }
}