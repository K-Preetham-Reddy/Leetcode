class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set=new HashSet<>();
        for(Integer num: nums){
            set.add(num);
        }
        int longest=0;
        for(Integer num: set){
            if(set.contains(num-1)){
                continue;
            }
            else{
                int temp=1;
                while(set.contains(num+temp)){
                    temp+=1;
                }
                longest=Math.max(longest,temp);
            }
        }
        return longest;
    }
}