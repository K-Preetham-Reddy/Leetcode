class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> li=new ArrayList<>();
        if(nums.length==0){
            return li;
        }
        String temp=nums[0]+"";
        if(nums.length==1){
            li.add(temp);
            return li;
        }
        int present=0;
        for(int i=1;i<nums.length;i++){
            if(!(nums[i]==nums[i-1]+1)){
                if((i-1)==present){
                    li.add(temp);
                }else{
                    temp=temp.concat("->");
                    temp=temp.concat(Integer.toString(nums[i-1]));
                    li.add(temp);
                }
                temp=nums[i]+"";
                present=i;
            }
        }
        if(present==nums.length-1){
            li.add(temp);
        }else{
            temp=temp.concat("->");
            temp=temp.concat(Integer.toString(nums[nums.length-1]));
            li.add(temp);
        }
        return li;
    }
}