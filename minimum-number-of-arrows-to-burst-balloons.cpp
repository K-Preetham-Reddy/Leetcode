class Solution {
    public int findMinArrowShots(int[][] points) {
        if(points.length==0 || points.length==1){
            return points.length;
        }
        Arrays.sort(points,(a,b)->Integer.compare(a[0],b[0]));
        int[] prev=points[0];
        int count=1;
        for(int i=1;i<points.length;i++){
            int[] present=points[i];
            if(present[0]<=prev[1]){
                prev[1]=Math.min(present[1],prev[1]);
            }else{
                count++;
                prev=present;
            }
        }
        return count;
    }
}