class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] arr=new int[2];
        for(int i=0;i<numbers.length-1;i++){
            int ind=Arrays.binarySearch(numbers,i+1,numbers.length,target-numbers[i]);
            if(ind>0){
                arr[0]=i+1;
                arr[1]=ind+1;
                return arr;
            }
        }
        return arr;
    }
}