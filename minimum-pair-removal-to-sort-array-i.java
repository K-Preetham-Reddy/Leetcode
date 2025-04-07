class Solution {
    public int minimumPairRemoval(int[] nums) {
        int count=0;
        List<Integer> nu=Arrays.stream(nums).boxed().collect(Collectors.toList());
        if(check(nu)|| nums.length==1){
            return count;
        }
        int ind=0;
        int sum=0;
        while(true){
            ind=index(nu);
            if(ind==0){
                return count;
            }
            sum=nu.get(ind)+nu.get(ind-1);
            nu.set(ind-1,sum);
            nu.remove(ind);
            count++;
            if(check(nu)) return count;
        }
    }
    public boolean check(List<Integer> nu){
        List<Integer> temp=new ArrayList<>(nu);
        Collections.sort(temp);
        return nu.equals(temp);
    }
    public int index(List<Integer> nu){
        int ind=0;
        int min=Integer.MAX_VALUE;
        int temp=0;
        for(int i=1;i<nu.size();i++){
            temp=nu.get(i)+nu.get(i-1);
            if(temp<min){
                ind=i;
                min=temp;
            }
        }
        return ind;
    }
}