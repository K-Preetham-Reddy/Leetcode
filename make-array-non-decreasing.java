class Solution {
    public int maximumPossibleSize(int[] nums) {
        int len=nums.length;
        int i=0;
        while(i<nums.length-1){
            if(nums[i]>nums[i+1]){
                int ind=check(nums[i],i+1,nums);
                if(ind!=-1){
                    len-=(ind-i-1);
                    i=ind;
                }
                else{
                    len-=(nums.length-i-1);
                    return len;
                }
            } 
            else{
                i++;
            }
        }
        return len;
    }
    public int check(int pre,int now_ind,int[] nums){
        for(int i=now_ind;i<nums.length;i++){
            if(nums[i]>=pre){
                return i;
            }
        }
        return -1;
    }
}
/// 1 2 3 4 5 6 3 5 2
/// 0 1 2 3 4 5(i) 6 7 8(ind)---> result=2    8-5-1