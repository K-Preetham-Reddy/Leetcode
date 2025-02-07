class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n_rows=matrix.length-1;
        int n_cols=matrix[0].length-1;
        int top=0;
        int bottom=n_rows;
        while(top<=bottom){
            int mid=(top+bottom)/2;
            if(matrix[mid][0]<=target && matrix[mid][n_cols]>=target){
                break;
            }else if(matrix[mid][0]>target){
                bottom-=1;
            }else if(matrix[mid][n_cols]<target){
                top+=1;
            }
        }
        int row=(top+bottom)/2;
        int left=0;
        int right=n_rows;
        if(Arrays.binarySearch(matrix[row],target)>=0){
            return true;
        }
        return false;
    }
}