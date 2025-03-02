class Solution {
    public int largestInteger(int[] nums, int k) {
        Map<Integer,Integer> map=new HashMap<>();
        int maxi=-1;
        if(nums.length==k){
            for(int i=0;i<k;i++){
                maxi=Math.max(maxi,nums[i]);
            }
            return maxi;
        }
        for(int i=0;i<=nums.length-k;i++){
            for(int j=i;j<i+k;j++){
                if(map.containsKey(nums[j])){
                    map.put(nums[j],map.get(nums[j])+1);
                }else{
                    map.put(nums[j],1);
                }
            }
        }
        for(Integer Key: map.keySet()){
            if(map.get(Key)==1){
                maxi=Math.max(maxi,Key);
            }
        }
        return maxi;
    }
}