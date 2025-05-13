class Solution {
    public int countKDifference(int[] nums, int k) {
        int freq[] = new int[101+k];
        int pairs = 0;
        for(int i:nums){
            freq[i]++;
        }
        for(int i=0;i<nums.length;i++){
            pairs+=freq[nums[i]+k];
        }

        return pairs;
    }
}