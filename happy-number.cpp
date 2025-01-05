class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> set= new HashSet<Integer>();
        while(!set.contains(n)){
            set.add(n);
            n=res(n);
        }
        if(n!=1){
            return false;
        }
        return true;


    }
    public int res(int num){
        int sum=0;
        while(num!=0){
            sum+=(num%10)*(num%10);
            num/=10;
        }
        return sum;
    }
}