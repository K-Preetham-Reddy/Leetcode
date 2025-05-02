class Solution {
    public int findMin(int[] nums) {
         int start = 0;
        int end = nums.length-1;

        while(start < end){
            int mid = start+(end - start)/2;

            if(end-start == 1) {
                if (nums[start] > nums[end]) {
                    return nums[end];
                } else {
                    return nums[start];
                }
            }
            if (nums[start] > nums[mid]){
                end = mid;
            }
            else if(nums[end] < nums[mid]) {
                start = mid;

            }else{
                return nums[start];
            }
        }
        return nums[start];
    }
}