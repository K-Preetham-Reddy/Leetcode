class Solution {
    public int[][] merge(int[][] intervals) {
        ArrayList<int[]> result= new ArrayList<>();
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        int[] prev=intervals[0];
        for(int i=1;i<intervals.length;i++){
            if(intervals[i][0]<=prev[1] && intervals[i][1]>=prev[1] ){
                prev[1]=intervals[i][1];
            }
            // else if(intervals[i][0]<=prev[1] && intervals[i][1]<=prev[1] ){
            //     continue;
            // }
            else if(intervals[i][0]>prev[1]){
                result.add(prev);
                prev=intervals[i].clone();
            }
        }
        result.add(prev);
        return result.toArray(new int[result.size()][]);

    }
}