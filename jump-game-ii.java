class Solution {
    public int jump(int[] nums) {
        int ln=nums.length;
        if(ln==1){
            return 0;
        }
        int current=0;
        int farthest=0;
        int jumps=0;
        for(int i=0;i<ln-1;i++){
            farthest=Math.max(farthest,nums[i]+i);
            if(current==i){
                jumps++;
                current=farthest;
                if(current>=ln-1){
                    break;
                }
            }
        }
        return jumps;
    }
}